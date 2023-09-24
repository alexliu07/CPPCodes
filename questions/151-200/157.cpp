//
// Created by liuyu on 2022/11/14.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, r, count = 0, tmp;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        tmp = i;
        while (tmp != 0) {
            if (tmp % 10 == 2) {
                count++;
            }
            tmp /= 10;
        }
    }
    cout << count;
    return 0;
}
