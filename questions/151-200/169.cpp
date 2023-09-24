//
// Created by liuyu on 2022/12/11.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long fibonacci[3] = {1, 1, 2};
    int n;
    cin >> n;
    if (n == 1 || n == 2 || n == 3) {
        cout << 1;
    } else {
        for (int i = 3; i < n; i++) {
            fibonacci[0] = fibonacci[1];
            fibonacci[1] = fibonacci[2];
            fibonacci[2] = (fibonacci[0] % 100000007) + (fibonacci[1] % 100000007);
            if (i == n - 1) {
                cout << fibonacci[2];
            }
        }
    }
    return 0;
}