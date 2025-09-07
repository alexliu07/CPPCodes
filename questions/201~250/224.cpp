//
// Created by Alex Liu on 2023/9/10.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int T;
    std::cin >> T;
    while (T--) {
        int n, m, x, maxn = 0, cnt = 0;
        std::map<int, int> line;
        std::cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            std::cin >> x;
            line[x]++;
        }
        for (int i = 1; i <= m; i++) {
            std::cin >> x;
            line[x] = 0;
        }
        for (auto poi: line) {
            if (poi.second)cnt += poi.second;
            else cnt = 0;
            maxn = std::max(cnt, maxn);
        }
        if (maxn == 0)std::cout << "Impossible";
        else std::cout << maxn;
        std::cout << std::endl;
    }
    return 0;
}
