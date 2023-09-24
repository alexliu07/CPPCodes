//
// Created by liuyu on 2022/11/14.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int c;
    for (int a = 0; a <= 100; a++) {
        for (int b = 0; b <= 100; b++) {
            c = 100 - a - b;
            if (a * 5 + b * 3 + c * (1.0 / 3) == 100) {
                cout << a << " " << b << " " << c << endl;
            }
        }
    }

    return 0;
}
