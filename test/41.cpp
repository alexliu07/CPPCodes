//
// Created by Alex Liu on 2023/9/24.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, ans = 0;
    std::function<void(int, int, int, int)> dfs = [&](int row, int col, int l, int r) {
        if (row == n + 1) {
            ans++;
            return;
        }
        int now = ~(col | l | r);
        while (now) {
            int a = now & (-now);
            now -= a;
            dfs(row + 1, col | a, (l | a) << 1, (r | a) >> 1);
        }
    };
    dfs(1, 0, 0, 0);
    std::cout << ans;
    return 0;
}
