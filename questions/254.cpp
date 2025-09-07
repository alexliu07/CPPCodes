//
// Created by Alex Liu on 2024/1/23.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t, n;
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        if (n <= 3) {
            std::cout << "-1\n";
            continue;
        }
        std::vector<int> odd, even;
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0)odd.push_back(i);
            else even.push_back(i);
        }
        if (n == 4) {
            std::cout << "3 1 4 2\n";
            continue;
        }
        if (n <= 6) {
            for (auto ss: odd)std::cout << ss << " ";
            for (auto ss: even) std::cout << ss << " ";
            std::cout << "\n";
            continue;
        }
        std::sort(even.begin(), even.end(), std::greater<int>());
        if (n % 2 != 0)std::swap(even[0], even[1]);
        else std::swap(odd[odd.size() - 1], odd[odd.size() - 2]);
        for (auto ss: odd)std::cout << ss << " ";
        for (auto ss: even) std::cout << ss << " ";
        std::cout << "\n";
    }
    return 0;
}
