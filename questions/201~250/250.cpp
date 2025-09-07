//
// Created by Alex Liu on 2024/1/22.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, k, cnt = 0;
    std::cin >> n >> m >> k;
    std::vector<int> ans(n + 1);
    std::multiset<std::pair<int, int> > a;
    std::pair<int, int> now;
    for (int i = 1; i <= n; i++) {
        int x;
        std::cin >> x;
        a.insert({x, i});
    }
    while (!a.empty()) {
        now.first = 0;
        cnt++;
        while (true) {
            auto it = a.lower_bound(now);
            if (it == a.end())break;
            ans[it->second] = cnt;
            now.first = it->first + k + 1;
            a.erase(it);
        }
    }
    std::cout << cnt << "\n";
    for (int i = 1; i <= n; i++) {
        std::cout << ans[i] << " ";
    }
    return 0;
}
