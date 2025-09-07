//
// Created by Alex Liu on 2023/12/24.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;
ll pos[N][2], n, m, k;

ll caldis(ll a, ll b) {
    ll ans = 0;
    for (int i = 1; i <= k; i++)ans += std::abs(a - pos[i][0]) + std::abs(b - pos[i][1]);
    return ans;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::cin >> n >> m >> k;
    for (int i = 1; i <= k; i++)std::cin >> pos[i][0] >> pos[i][1];
    ll ans = -INF;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            bool flag = false;
            for (int l = 1; l <= k; l++) {
                if (i == pos[l][0] && j == pos[l][1]) {
                    flag = true;
                    break;
                }
            }
            if (flag)continue;
            ans = std::max(ans, caldis(i, j));
        }
    }
    std::cout << ans;
    return 0;
}
