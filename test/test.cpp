#include<bits/stdc++.h>

#define N 100005
typedef long long ll;

int f[N];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m;
    std::cin >> n >> m;
    std::vector<int> w(m + 1), c(m + 1), mn(m + 1);
    for (int i = 1; i <= m; i++)std::cin >> c[i] >> w[i] >> mn[i];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
//            if (mn[i] == 0)f[j] = std::max(f[j], f[j - c[i]] + w[i]);
            if (j - c[mn[i]] < 0)continue;
            f[j] = std::max(f[j], f[j - c[mn[i]]] + w[mn[i]]);
        }
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++) {
        ans += f[i] * c[i];
    }
    std::cout << ans;
    return 0;
}

