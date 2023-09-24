//
// Created by liuyu on 2022/12/11.
//

#include <bits/stdc++.h>

using namespace std;


int main() {
    int a, b, count = 0;
    cin >> a >> b;
    while (b % a == 0) {
        count++;
        b /= a;
    }
    cout << count;
}
