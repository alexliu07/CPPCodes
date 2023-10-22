//
// Created by Alex Liu on 2023/10/4.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2}, dy[] = {1, -1, 2, -2, 2, -2, 1, -1};

struct Edge {
    int u, v, w;

    bool operator<(const Edge &rhs) const {
        return w < rhs.w;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m;
    std::cin >> n >> m;
    std::vector<std::vector<int> > mp(m + 1, std::vector<int>(m + 1));
    std::vector<int> xxx(n + 1), yyy(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> xxx[i] >> yyy[i];
        mp[xxx[i]][yyy[i]] = i;
    }
    //std::vector<std::vector<std::pair<int,int> > > G(n + 1);
    std::vector<Edge> e;
    auto bfs = [&](int sx, int sy) {
        std::queue<std::pair<int, int> > q;
        std::vector<std::vector<bool> > vis(m + 1, std::vector<bool>(m + 1));
        std::vector<std::vector<int> > step(m + 1, std::vector<int>(m + 1));
        q.push({sx, sy});
        vis[sx][sy] = 1;
        step[sx][sy] = 0;
        while (!q.empty()) {
            auto xx = q.front();
            q.pop();
            int x = xx.first, y = xx.second;
            for (int i = 0; i < 8; i++) {
                int tx = x + dx[i], ty = y + dy[i];
                if (tx < 1 || tx > m || ty < 1 || ty > m)continue;
                if (vis[tx][ty])continue;
                vis[tx][ty] = 1;
                step[tx][ty] = step[x][y] + 1;
                if (mp[tx][ty]) {
//                    G[mp[sx][sy]].push_back({mp[tx][ty],step[tx][ty]});
//                    G[mp[tx][ty]].push_back({mp[sx][sy],step[tx][ty]});
                    e.push_back((Edge) {mp[sx][sy], mp[tx][ty], step[tx][ty]});
                }
            }
        }
    };
    for (int i = 1; i <= n; i++) {
        bfs(xxx[i], yyy[i]);
    }
    std::sort(e.begin(), e.end());
    std::vector<int> fa(n + 1);
    std::function<int(int)> find = [&](int x) {
        return fa[x] == x ? x : fa[x] = find(fa[x]);
    };
    for (int i = 1; i <= n; i++)fa[i] = i;
    int ans = 0, cnt = 0;
    auto kruskal = [&]() {
        for (auto ee: e) {
            if (find(ee.u) != find(ee.v)) {
                fa[find(ee.u)] = find(ee.v);
                ans += ee.w;
                if (++cnt >= n - 1)break;
            }
        }
    };
    kruskal();
    std::cout << ans;
    return 0;
}