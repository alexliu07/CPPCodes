//
// Created by Alex Liu on 2024/1/24.
//

#include <bits/stdc++.h>

#define N 10005
#define M 1000007
typedef long long ll;

ll f[N][N];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    ll n, m;
    std::cin >> n >> m;
    std::vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)std::cin >> a[i];
    for (int k = 0; k <= a[1]; k++)f[1][k] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            for (int k = 0; k <= a[i]; k++) {
                if (j - k < 0)continue;
                f[i][j] = (f[i][j] % M + (f[i - 1][j - k] % M)) % M;
            }
        }
    }
    std::cout << f[n][m];
    return 0;
}