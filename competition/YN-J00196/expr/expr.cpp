#include <bits/stdc++.h>

using namespace std;
int brackets[10000];
bool flag = true, status = true;
int counta = 0, countb = 0, j, btop = 1;

string cleaner(string expr) {
    //短路
    if (expr.find("&") != string::npos) {
        while (flag) {
            flag = false;
            for (int i = 0; i < expr.length(); i++) {
                //&短路
                if (expr[i] == '&' && (expr[i - 1] == '0' || expr[i + 1] == '0')) {
                    flag = true;
                    status = true;
                    btop = 1;
                    counta++;
                    if (expr[i + 1] == '(') {
                        j = i + 1;
                        //寻找右边的内容
                        while (btop != 0 && j < expr.length()) {
                            if (expr[j] == '(') {
                                if (status) {
                                    btop = 0;
                                    status = false;
                                }
                                brackets[btop] = 1;
                                btop++;
                            } else if (expr[j] == ')') {
                                if (brackets[btop - 1] == 1) {
                                    btop--;
                                }
                            }
                            j++;
                        }
                        expr.erase(i - 1, j - i + 1);
                        expr.insert(i - 1, "0");
                    } else if (expr[i - 1] == ')') {
                        j = i - 1;
                        //寻找左边的内容
                        while (btop != 0 && j >= 0) {
                            if (expr[j] == ')') {
                                if (status) {
                                    btop = 0;
                                    status = false;
                                }
                                brackets[btop] = 1;
                                btop++;
                            } else if (expr[j] == '(') {
                                if (brackets[btop - 1] == 1) {
                                    btop--;
                                }
                            }
                            j--;
                        }
                        expr.erase(j + 1, i - j + 1);
                        expr.insert(j + 1, "0");
                    } else {
                        expr.erase(i - 1, 3);
                        expr.insert(i - 1, "0");
                    }
                    cout << expr << endl;
                    break;
                }
            }
        }
    }
    flag = true;
    if (expr.find("|") != string::npos) {
        while (flag) {
            flag = false;
            //|短路
            for (int i = 0; i < expr.length(); i++) {
                if (expr[i] == '|' && (expr[i - 1] == '1' || expr[i + 1] == '1')) {
                    flag = true;
                    status = true;
                    btop = 1;
                    countb++;
                    if (expr[i + 1] == '(') {
                        j = i + 1;
                        //寻找右边的内容
                        while (btop != 0 && j < expr.length()) {
                            if (expr[j] == '(') {
                                if (status) {
                                    btop = 0;
                                    status = false;
                                }
                                brackets[btop] = 1;
                                btop++;
                            } else if (expr[j] == ')') {
                                if (brackets[btop - 1] == 1) {
                                    btop--;
                                }
                            }
                            j++;
                        }
                        expr.erase(i - 1, j - i + 1);
                        expr.insert(i - 1, "1");
                    } else if (expr[i - 1] == ')') {
                        j = i - 1;
                        //寻找左边的内容
                        while (btop != 0 && j >= 0) {
                            if (expr[j] == ')') {
                                if (status) {
                                    btop = 0;
                                    status = false;
                                }
                                brackets[btop] = 1;
                                btop++;
                            } else if (expr[j] == '(') {
                                if (brackets[btop - 1] == 1) {
                                    btop--;
                                }
                            }
                            j--;
                        }
                        expr.erase(j + 1, i - j + 1);
                        expr.insert(j + 1, "1");
                    } else {
                        expr.erase(i - 1, 3);
                        expr.insert(i - 1, "1");
                    }
                    cout << expr << endl;
                    break;
                }
            }
        }
    }
    return expr;
}

int main() {
//	freopen("expr.in", "r", stdin);
//	freopen("expr.out", "w", stdout);
    string expr;
    cin >> expr;
    //初始化
    for (int i = 0; i < expr.length(); i++) {
        brackets[i] = 0;
    }
    //化简
    flag = true;
    expr = cleaner(expr);
    //去括号
    flag = true;
    if (expr.find("(") != string::npos || expr.find(")") != string::npos) {
        while (flag) {
            flag = false;
            for (int i = 0; i < expr.length(); i++) {
                if (expr[i] == '(' || expr[i] == ')') {
                    expr.erase(i, 1);
                    flag = true;
                    break;
                }
            }
        }
    }
    //化简
    flag = true;
    expr = cleaner(expr);
    cout << expr << endl;
    cout << counta << " " << countb;
    return 0;
}