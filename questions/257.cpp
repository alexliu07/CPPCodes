//
// Created by Alex Liu on 2024/1/24.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

ll f[N][2];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin >> n;
    std::vector<int> L(n + 1), R(n + 1);
    for (int i = 1; i <= n; i++)std::cin >> L[i] >> R[i];
    f[1][0] = (R[1] - 1) + (R[1] - L[1]);
    f[1][1] = R[1] - 1;
    for (int i = 2; i <= n; i++) {
        int length = R[i] - L[i];
        f[i][0] = std::min(f[i - 1][0] + length + std::abs(L[i - 1] - R[i]) + 1,
                           f[i - 1][1] + length + std::abs(R[i - 1] - R[i]) + 1);
        f[i][1] = std::min(f[i - 1][0] + length + std::abs(L[i - 1] - L[i]) + 1,
                           f[i - 1][1] + length + std::abs(R[i - 1] - L[i]) + 1);
    }
    std::cout << std::min(f[n][0] + (n - L[n]), f[n][1] + (n - R[n]));
    return 0;
}
