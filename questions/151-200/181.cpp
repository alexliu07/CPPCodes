//
// Created by liuyu on 2023/2/26.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    double price = 1.9, money;
    cin >> a >> b;
    money = a + b * 1.0 / 10;
    cout << floor(money / price);
    return 0;
}
