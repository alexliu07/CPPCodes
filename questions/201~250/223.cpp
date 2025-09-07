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

    int n, k;
    std::cin >> n >> k;
    if (k == 0)std::cout << -1;
    else {
        if (k % 2 == 0) {
            int count = 0;
            for (int i = 1; i <= n; i++) {
                if (count < k) {
                    std::cout << (i % 2 == 0 ? i - 1 : i + 1);
                    count++;
                } else {
                    std::cout << i;
                }
                std::cout << " ";
            }
        } else {
            int count = 1;
            std::cout << 1 << " ";
            for (int i = 2; i <= n; i++) {
                if (count < k) {
                    std::cout << (i % 2 == 0 ? i + 1 : i - 1);
                    count++;
                } else {
                    std::cout << i;
                }
                std::cout << " ";
            }
        }
    }
    return 0;
}