//
// Created by liuyu on 2022/12/18.
//

#include <bits/stdc++.h>

using namespace std;

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
    string tmp;
    long long count0, count1, A = 0, B = 0;
    for (int i = 1; i <= 1000; i++) {
        count0 = 0;
        count1 = 0;
        tmp = convertFromTen(i, 2);
        for (int j = 0; j < tmp.length(); j++) {
            if (tmp[j] == '0') {
                count0++;
            } else {
                count1++;
            }
        }
        if (count0 < count1) {
            A++;
        } else {
            B++;
        }
    }
    cout << A << " " << B;
    return 0;
}
