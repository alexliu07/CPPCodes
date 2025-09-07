#include <bits/stdc++.h>

#define N 55
typedef long long ll;

ll f[N][N][2], pre[N], w[N], pos[N];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, c;
    std::cin >> n >> c;
    for (int i = 1; i <= n; i++)std::cin >> pos[i] >> w[i];
    for (int i = 1; i <= n; i++)pre[i] = pre[i - 1] + w[i];
    memset(f, 0x3f, sizeof(f));
    f[c][c][0] = f[c][c][1] = 0;
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i + l - 1 <= n; i++) {
            int j = i + l - 1;
            f[i][j][0] = std::min(f[i][j][0], f[i + 1][j][0] + (pre[i] + pre[n] - pre[j]) * (pos[i + 1] - pos[i]));
            f[i][j][0] = std::min(f[i][j][0], f[i + 1][j][1] + (pre[i] + pre[n] - pre[j]) * (pos[j] - pos[i]));
            f[i][j][1] = std::min(f[i][j][1], f[i][j - 1][0] + (pre[i - 1] + pre[n] - pre[j - 1]) * (pos[j] - pos[i]));
            f[i][j][1] = std::min(f[i][j][1],
                                  f[i][j - 1][1] + (pre[i - 1] + pre[n] - pre[j - 1]) * (pos[j] - pos[j - 1]));
        }
    }
    std::cout << std::min(f[1][n][0], f[1][n][1]);
    return 0;
}