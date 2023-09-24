//
// Created by liuyu on 2023/2/26.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d, start, end, duration;
    cin >> a >> b >> c >> d;
    start = a * 60 + b;
    end = c * 60 + d;
    duration = end - start;
    cout << duration / 60 << " " << duration - (duration / 60 * 60);
    return 0;
}
