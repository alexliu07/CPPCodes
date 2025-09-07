//
// Created by Alex Liu on 2023/7/22.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int n, m, minDiff = INF;
std::vector<int> a;

void dfs(int now, int max, int min, int count) {
    if (count == m) {
        minDiff = std::min(minDiff, abs(max - min));
        return;
    }
    for (int i = now + 2; i < n; i++) {
        dfs(i, std::max(max, a[i]), std::min(min, a[i]), count + 1);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);


    std::cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        int tmp;
        std::cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i <= n - m; i++) {
        dfs(i, a[i], a[i], 1);
    }
    std::cout << minDiff;
    return 0;
}