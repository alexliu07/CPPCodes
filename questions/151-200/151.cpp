//
// Created by liuyu on 2022/11/12.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    bool isZero = true;
    long long n;
    cin >> n;
    if (n < 0) {
        cout << "-";
        n = -n;
    }
    while (n != 0) {
        if (isZero) {
            if (n % 10 != 0) {
                isZero = false;
            } else {
                n /= 10;
                continue;
            }
        }
        cout << n % 10;
        n /= 10;
    }
    return 0;
}
