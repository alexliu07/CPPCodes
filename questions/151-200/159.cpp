//
// Created by liuyu on 2022/11/14.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m;
    if (((m - (2 * n)) % 2) == 0) {
        x = (m - (2 * n)) / 2;
        y = n - x;
        cout << y << " " << x;
    } else {
        cout << "NULL";
    }


    return 0;
}
