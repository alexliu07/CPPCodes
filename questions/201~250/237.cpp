//
// Created by Alex Liu on 2023/11/13.
//

#include <bits/stdc++.h>

#define N 1005
#define INF 0x7fffffff
typedef long long ll;

int r, g[N][N];
ll ans = -1;

void dfs(int index, int line, ll sum) {
    if (line == r) {
        ans = std::max(sum + g[line][index], ans);
        return;
    }
    for (int i = index; i <= index + 1; i++) {
        dfs(i, line + 1, sum + g[line][index]);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::cin >> r;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            std::cin >> g[i][j];
        }
    }
    dfs(1, 1, 0);
    std::cout << ans;
    return 0;
}
