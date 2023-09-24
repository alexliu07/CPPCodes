//
// Created by liuyu on 2023/4/9.
//

#include <bits/stdc++.h>

using namespace std;

map<char, char> keydictE2O, keydictO2E;

int main() {
    bool flag = true;
    string original, encrypted, message;
    cin >> encrypted >> original >> message;
    for (int i = 0; i < encrypted.size(); i++) {
        //未映射过原值就执行映射
        if (keydictE2O[encrypted[i]] == 0)keydictE2O[encrypted[i]] = original[i];
        else if (keydictE2O[encrypted[i]] != original[i]) {
            //已映射过不同值就失败
            flag = false;
            break;
        }
        //未映射过加密值就执行映射
        if (keydictO2E[original[i]] == 0)keydictO2E[original[i]] = encrypted[i];
        else if (keydictO2E[original[i]] != encrypted[i]) {
            //已映射过不同值就失败
            flag = false;
            break;
        }
    }
    if (flag) {
        //26个字母中剩余没有映射过的就失败
        for (char i = 'A'; i <= 'Z'; i++) {
            if (keydictE2O[i] == 0) {
                flag = false;
                break;
            }
        }
        //输出
        if (flag)for (int i = 0; i < message.size(); i++)cout << keydictE2O[message[i]];
    }
    if (!flag)cout << "Failed";
    return 0;
}
