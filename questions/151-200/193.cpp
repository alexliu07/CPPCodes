//
// Created by liuyu on 2023/4/16.
//

#include <bits/stdc++.h>

#define N 500005

using namespace std;
typedef long long ll;

int c[N], n, m;


int lowbit(int x) {
    return x & -x;
}

void update(int x, ll v) {
    for (int i = x; i <= n; i += lowbit(i)) {
        c[i] += v;
    }
}

ll query(int x) {
    ll sum = 0;
    for (int i = x; i > 0; i -= lowbit(i)) {
        sum += c[i];
    }
    return sum;
}

int main() {
    cin >> n >> m;
    ll last = 0;
    for (int i = 1; i <= n; i++) {
        ll tmp;
        cin >> tmp;
        update(i, tmp - last);
        last = tmp;
    }
    while (m--) {
        int t, x;
        cin >> t >> x;
        if (t == 1) {
            int y;
            ll k;
            cin >> y >> k;
            update(x, k);
            update(y + 1, -k);
        } else {
            cout << query(x) << endl;
        }
    }
    return 0;
}
