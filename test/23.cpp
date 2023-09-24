//
// Created by liuyu on 2022/11/6.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string expr;
    int atop = 0, btop = 0;
    char a[1000], b[1000];
    cin >> expr;
    for (int i = 0; i < expr.length(); i++) {
        //数字直接保存
        if (expr[i] >= '0' && expr[i] <= '9') {
            b[btop] = expr[i];
            btop++;
            //遇到or弹出前面的and和or并入栈
        } else if (expr[i] == '|') {
            while (atop > 0) {
                if (a[atop - 1] == '(') {
                    break;
                }
                atop--;
                b[btop] = a[atop];
                btop++;
            }
            a[atop] = '|';
            atop++;
            //遇到and弹出前面的and并入栈
        } else if (expr[i] == '&') {
            while (atop > 0) {
                if (a[atop - 1] != '&') {
                    break;
                }
                atop--;
                b[btop] = '&';
                btop++;
            }
            a[atop] = '&';
            atop++;
            //遇到左括号直接入栈
        } else if (expr[i] == '(') {
            a[atop] = '(';
            atop++;
            //遇到右括号弹出到左括号的所有元素
        } else if (expr[i] == ')') {
            while (atop > 0) {
                atop--;
                if (a[atop] == '(') {
                    break;
                }
                b[btop] = a[atop];
                btop++;
            }
        }
    }
    //将栈内剩下的弹出
    while (atop != 0) {
        atop--;
        b[btop] = a[atop];
        btop++;
    }
    for (int i = 0; i < btop; i++) {
        cout << b[i];
    }
}