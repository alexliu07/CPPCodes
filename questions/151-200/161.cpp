//
// Created by liuyu on 2022/11/18.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    bool flag = true;
    int n, a[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    cin >> n;
    cout << n << "=";
    while (n > 1) {
        flag = true;
        for (int i = 0; i < 25; i++) {
            if (n % a[i] == 0 && n != a[i]) {
                cout << a[i] << "*";
                n /= a[i];
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << n;
            break;
        }
    }
    return 0;
}
