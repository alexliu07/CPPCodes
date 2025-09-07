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
    int n, m, a, q;
    std::cin >> n >> m;
    std::map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        std::cin >> a;
        mp[a] = ((mp[a] != 0) ? mp[a] : i);
    }
    while (m--) {
        std::cin >> q;
        std::cout << ((mp[q] != 0) ? mp[q] : -1) << " ";
    }
    return 0;
}
