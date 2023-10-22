//
// Created by Alex Liu on 2023/10/4.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

struct node {
    int c, w;
    double x;

    bool operator<(const node &rhs) const {
        return x > rhs.x;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int T, n;
    std::cin >> T >> n;
    std::vector<node> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i].c >> a[i].w;
        a[i].x = 1.0 * a[i].w / a[i].c;
    }
    std::sort(a.begin() + 1, a.end());
    int ans = -INF, cnt = 0;
    std::function<void(int, int, int)> dfs = [&](int now, int v, int sum) {
        if (++cnt >= 5e6)return;
        if (now > n) {
            ans = std::max(ans, sum);
            return;
        }
        if (v + a[now].c <= T)dfs(now + 1, v + a[now].c, sum + a[now].w);
        dfs(now + 1, v, sum);
    };
    dfs(1, 0, 0);
    std::cout << ans;
    return 0;
}
