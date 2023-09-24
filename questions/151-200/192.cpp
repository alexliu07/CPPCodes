//
// Created by liuyu on 2023/4/16.
//

#include <bits/stdc++.h>

#define N 500005
typedef long long ll;

using namespace std;
int c[N], n, m;

int lowbit(int x) {
    return x & -x;
}

void update(int x, int y) {
    while (x <= n) {
        c[x] += y;
        x += lowbit(x);
    }
}

ll query(int x) {
    ll res = 0;
    while (x) {
        res += c[x];
        x -= lowbit(x);
    }
    return res;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        update(i, x);
    }
    while (m--) {
        int t;
        cin >> t;
        if (t == 1) {
            int x, k;
            cin >> x >> k;
            update(x, k);
        } else {
            int x, y;
            cin >> x >> y;
            cout << query(y) - query(x - 1) << endl;
        }
    }
    return 0;
}
