//
// Created by liuyu on 2023/2/26.
//

#include <bits/stdc++.h>

#define PI 3.14

using namespace std;

int main() {
    int h, r, count;
    double v;
    cin >> h >> r;
    v = PI * r * r * h;
    count = ceil(20000.0 / v);
    cout << count;
    return 0;
}
