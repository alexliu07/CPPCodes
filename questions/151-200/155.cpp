//
// Created by liuyu on 2022/11/14.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    bool status = true;
    int a, b, c;
    cin >> a >> b >> c;
    for (int x = 1; x <= 3000; x++) {
        for (int y = 1; y <= 2000; y++) {
            if ((a * x + b * y) == c) {
                cout << x << " " << y << endl;
                status = false;
            }
        }
    }
    if (status) {
        cout << "-1";
    }
    return 0;
}
