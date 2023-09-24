//
// Created by liuyu on 2023/2/26.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    double t, perp;
    int n, btls;
    cin >> t >> n;
    perp = t / n;
    btls = n * 2;
    printf("%.3f\n%d", perp, btls);
    return 0;
}
