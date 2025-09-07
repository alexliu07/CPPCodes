//
// Created by Alex Liu on 2023/11/14.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, g, k, x, y, ans = -1;
    std::cin >> n;
    std::vector<std::vector<int> > inter(n + 1, std::vector<int>(4));
    for (int i = 1; i <= n; i++) {
        std::cin >> inter[i][0] >> inter[i][2] >> g >> k;
        inter[i][1] = inter[i][0] + g;
        inter[i][3] = inter[i][2] + k;
    }
    std::cin >> x >> y;
    for (int i = n; i > 0; i--) {
        if (x >= inter[i][0] && x <= inter[i][1] && y >= inter[i][2] && y <= inter[i][3]) {
            ans = i;
            break;
        }
    }
    std::cout << ans;
    return 0;
}
