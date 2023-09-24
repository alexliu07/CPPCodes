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

    int T, c1, c2, c3, d1, d2, d3;
    std::cin >> T;
    while (T--) {
        std::cin >> c1 >> c2 >> c3 >> d1 >> d2 >> d3;
        if (c1 > d2 || c3 > d1)std::cout << "C";
        else if (d1 - c3 > c2 || d3 > c1)std::cout << "D";
        else std::cout << "E";
        std::cout << std::endl;
    }
    return 0;
}
