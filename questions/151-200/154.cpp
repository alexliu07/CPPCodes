//
// Created by liuyu on 2022/11/12.
//

#include <bits/stdc++.h>

using namespace std;

int fac(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (i * i == n) {
            count++;
            break;
        }
        if (n % i == 0) {
            count += 2;
        }
    }
    return count;
}

int main() {
    int n, m, maxn, maxnum = 0, tmp;
    cin >> n >> m;
    for (int i = n; i <= m; i++) {
        tmp = fac(i);
        if (tmp > maxnum) {
            maxn = i;
            maxnum = tmp;
        }
    }
    cout << maxn << " " << maxnum;
    return 0;
}
