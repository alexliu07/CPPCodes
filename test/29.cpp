//
// Created by liuyu on 2022/12/19.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    //ax + by = c
    int a, b, c, count = 0;
    cin >> a >> b >> c;
    for (int i = 0; i * a <= c; i++) {
        for (int j = 0; j * b <= c; j++) {
            if (a * i + b * j == c) {
                count++;
                cout << "x" << count << " = " << i << ",y" << count << " = " << j << endl;
            }
        }
    }
    return 0;
}
