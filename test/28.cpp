//
// Created by liuyu on 2022/12/18.
//

#include <bits/stdc++.h>

using namespace std;

long long convertToTen(string num, int hex) {
    long long result = 0;
    bool flag = false;
    if (num[0] == '-') {
        flag = true;
        num.erase(0, 1);
    }
    int j = 0;
    for (int i = num.length() - 1; i >= 0; i--) {
        if (num[i] >= '0' && num[i] <= '9') {
            result += pow(hex, j) * (num[i] - '0');
        } else {
            result += pow(hex, j) * (num[i] + 10 - 'A');
        }
        j++;
    }
    return result;
}

string convertFromTen(long long x, int hex) {
    int vtop = 0, val[1000] = {0}, otop = 0;
    string outp;
    if (x < 0) {
        outp.push_back('-');
    }
    x = abs(x);
    //转换
    while (x != 0) {
        val[vtop] = x % hex;
        x /= hex;
        vtop++;
    }
    for (int i = vtop - 1; i >= 0; i--) {
        if (val[i] < 10) {
            outp.push_back(val[i] + '0');
        } else {
            outp.push_back(val[i] - 10 + 'A');
        }
    }
    return outp;
}

int main() {
    int oldHex, newHex;
    long long longnum, tmp;
    string strnum;
    cin >> oldHex >> newHex;
    if (oldHex == newHex) {
        cin >> strnum;
        cout << strnum;
    } else if (oldHex == 10) {
        cin >> longnum;
        cout << convertFromTen(longnum, newHex);
    } else if (newHex == 10) {
        cin >> strnum;
        cout << convertToTen(strnum, oldHex);
    } else {
        cin >> strnum;
        tmp = convertToTen(strnum, oldHex);
        cout << convertFromTen(tmp, newHex);
    }
    return 0;
}
