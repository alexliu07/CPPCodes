//
// Created by Alex Liu on 2023/9/3.
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
    std::cout << (4 * n - 2 * m > 0 ? 4 * n - 2 * m : 0);
    return 0;
}
