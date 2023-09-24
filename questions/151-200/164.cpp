//
// Created by liuyu on 2022/12/4.
//

#include <bits/stdc++.h>

using namespace std;

long long fac(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

long long c(int n, int m) {
    long long res;
    res = fac(n) / (fac(m) * fac(n - m));
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << c(n, m);
    return 0;
}
