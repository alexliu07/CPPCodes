//
// Created by liuyu on 2023/2/26.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    double tmp;
    int s, v, t;
    cin >> s >> v;
    tmp = s * 1.0 / v;
    t = 480 - (ceil(tmp) + 10);
    if (t < 0) {
        t += 1440;
    }
    if (t / 60 < 10) {
        cout << 0;
    }
    cout << t / 60 << ":";
    if ((t - (t / 60 * 60)) < 10) {
        cout << 0;
    }
    cout << t - (t / 60 * 60);
    return 0;
}
