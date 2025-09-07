//
// Created by Alex Liu on 2024/1/24.
//

#include <bits/stdc++.h>

#define N 3005
#define INF 0x7fffffff
typedef long long ll;

ll f[N][N][3];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::map<char, int> mp;
    mp['A'] = 1;
    mp['T'] = 2;
    mp['G'] = 3;
    mp['C'] = 4;
    std::string A, B;
    std::cin >> A >> B;
    int n = A.size(), m = B.size(), a, b;
    std::vector<std::vector<int> > d(5, std::vector<int>(5));
    for (int i = 1; i <= 4; i++)for (int j = 1; j <= 4; j++)std::cin >> d[i][j];
    std::cin >> a >> b;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++) {
            f[i][j][0] = -INF;
            f[i][j][1] = -INF;
            f[i][j][2] = -INF;
        }
    f[0][0][0] = 0;
    for (int i = 1; i <= n; i++)f[i][0][2] = -a - (i - 1) * b;
    for (int j = 1; j <= m; j++)f[0][j][1] = -a - (j - 1) * b;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            f[i][j][0] = std::max(
                    std::max(f[i - 1][j - 1][0] + d[mp[A[i - 1]]][mp[B[j - 1]]],
                             f[i - 1][j - 1][1] + d[mp[A[i - 1]]][mp[B[j - 1]]]),
                    f[i - 1][j - 1][2] + d[mp[A[i - 1]]][mp[B[j - 1]]]);
            f[i][j][1] = std::max(std::max(f[i][j - 1][0] - a, f[i][j - 1][1] - b), f[i][j - 1][2] - a);
            f[i][j][2] = std::max(std::max(f[i - 1][j][0] - a, f[i - 1][j][1] - a), f[i - 1][j][2] - b);
        }
    }
    std::cout << std::max(std::max(f[n][m][0], f[n][m][1]), f[n][m][2]);
    return 0;
}
