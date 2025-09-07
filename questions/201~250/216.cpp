//
// Created by Alex Liu on 2023/8/17.
//

#include <bits/stdc++.h>

#define N 10005
#define INF 0x7fffffffffffffff
#define M 998244353
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int T, op;
    ll n, m, Q;
    std::cin >> T;
    while (T--) {
        std::cin >> op >> n >> m;
        if (op == 1) {
            std::cout << m + n - 1;
        } else {
            std::cin >> Q;
            ll a = std::min(m, n);
            ll b = Q + 1 - a;
            ll c = std::max(n, m);
            ll res = (a % M) * ((b - c) % M) % M;
            std::cout << res;
        }
        std::cout << std::endl;
    }
    return 0;
}
