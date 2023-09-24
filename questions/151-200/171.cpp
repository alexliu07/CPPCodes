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

string licenses[500000];

int main() {
    bool flag = true;
    long long minx, tmpA, tmpB;
    int ltop = 0;
    string a, numA, numB;
    while (cin >> a && a != "e") {
        licenses[ltop] = a;
        ltop++;
    }
    for (int i = 0; i < ltop; i++) {
        numA = licenses[i];
        numA.erase(0, 2);
        tmpA = convertToTen(numA, 36);
        for (int j = i + 1; j < ltop; j++) {
            numB = licenses[j];
            numB.erase(0, 2);
            tmpB = convertToTen(numB, 36);
            if (flag) {
                minx = abs(tmpA - tmpB);
                flag = false;
            } else {
                if (abs(tmpA - tmpB) < minx) {
                    minx = abs(tmpA - tmpB);
                }
            }
        }
    }
    cout << minx;
    return 0;
}
