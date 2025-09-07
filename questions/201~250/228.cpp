//
// Created by Alex Liu on 2023/10/4.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int l, r;
    ll k;
    std::cin >> l >> r >> k;
    std::function<ll(int)> fac = [&](int x) {
        ll ans = 1;
        for (int i = 1; i <= x; i++) {
            ans = (ans * (ll) (i % k)) % k;
        }
        return ans;
    };
    ll cur = fac(l), res = cur;
    for (int i = 1; i <= r - l; i++) {
        cur = (cur * ((l + i) % k)) % k;
        res = std::max(res, cur);
    }
    std::cout << res;
    return 0;
}
