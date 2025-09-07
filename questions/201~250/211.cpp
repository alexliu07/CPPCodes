//
// Created by Alex Liu on 2023/7/20.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x3fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, s;
    std::cin >> n >> m >> s;
    std::vector<std::vector<std::pair<int, int> > > G(n + 1);
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        std::cin >> u >> v >> w;
        G[u].push_back({v, w});
    }
    //spfa
    std::vector<int> dis(n + 1, INF), isInQueue(n + 1);
    std::function<void(int)> spfa = [&](int s) {
        std::queue<int> q;
        q.push(s);
        dis[s] = 0;
        isInQueue[s] = 1;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            isInQueue[u] = 0;
            //遍历能通向的每个点
            for (auto ss: G[u]) {
                int v = ss.first, w = ss.second;
                //松弛操作
                if (dis[v] > dis[u] + w) {
                    dis[v] = dis[u] + w;
                    if (!isInQueue[v]) {
                        isInQueue[v] = 1;
                        q.push(v);
                    }
                }
            }
        }
    };
    spfa(s);
    for (int i = 1; i <= n; i++) {
        std::cout << (dis[i] != INF ? dis[i] : 2147483647) << " ";
    }
    return 0;
}
