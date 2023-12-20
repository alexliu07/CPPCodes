//
// Created by Alex Liu on 2023/12/17.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int a;
    std::cin >> a;
    std::cout << std::ceil((a * 1.0 / 10) * (a * 1.0 / 10));
    return 0;
}
