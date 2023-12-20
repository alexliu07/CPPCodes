//
// Created by Alex Liu on 2023/12/15.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, k, l, root = 0;
    std::cin >> n;
    std::vector<int> r(n + 1), fa(n + 1);
    for (int i = 1; i <= n; i++)std::cin >> r[i];
    std::vector<std::vector<int> > G(n + 1), f(n + 1, std::vector<int>(2));
    for (int i = 1; i < n; i++) {
        std::cin >> l >> k;
        G[l].push_back(k);
        G[k].push_back(l);
        fa[l] = k;
    }
    for (int i = 1; i <= n; i++) {
        if (fa[i] == 0) {
            root = i;
            break;
        }
    }
    std::function<void(int, int)> dfs = [&](int u, int par) {
        f[u][0] = r[u];
        for (auto v: G[u]) {
            if (v == par)continue;
            dfs(v, u);
            f[u][0] += f[v][1];
            f[u][1] += std::max(f[v][0], f[v][1]);
        }
    };
    dfs(root, 0);
    std::cout << std::max(f[root][0], f[root][1]);
    return 0;
}
