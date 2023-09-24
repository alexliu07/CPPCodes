//
// Created by liuyu on 2023/2/26.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b, c, p, s;
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.1f", s);
    return 0;
}
