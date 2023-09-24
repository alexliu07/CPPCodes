//
// Created by liuyu on 2023/4/30.
//

#include <bits/stdc++.h>

#define N 1000005
typedef long long ll;

using namespace std;

int a[N], b[N], n, m, k;
ll cnt = 0;

bool cmp(int a, int b) {
    if (a > b) {
        return true;
    }
    return false;
}

int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt += a[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
        cnt += b[i];
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (a[i] >= k) {
            cnt += a[i];
        } else {
            cnt += k;
        }
    }
    cout << cnt;
    return 0;
}
