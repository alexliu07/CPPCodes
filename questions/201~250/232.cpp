//
// Created by Alex Liu on 2023/10/4.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m;
    std::cin >> n >> m;
    std::vector<int> height(n);
    for (auto &ss: height) {
        std::cin >> ss;
    }
    auto check = [&](int x) {
        ll sum = 0;
        for (auto ss: height) {
            if (ss > x)sum += ss - x;
        }
        return sum >= m;
    };

    int l = 0, r = 1e9;
    while (l + 1 < r) {
        int mid = (l + r) / 2;
        if (check(mid))l = mid;
        else r = mid;
    }
    std::cout << l;
    return 0;
}
