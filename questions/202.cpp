//
// Created by liuyu on 2023/5/28.
//

#include <bits/stdc++.h>

typedef long long ll;

ll n, k;
int T;
bool flag1, flag2;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin >> T;
    while (T--) {
        flag1 = flag2 = true;
        std::cin >> n >> k;
        if (k == 0 && n % 2 == 0) {
            std::cout << n / 2 << " " << n / 2 << std::endl;
            flag1 = flag2 = false;
        }
        if (flag2) {
            for (ll x = k; (n - x) > k; x++) {
                if (x % (n - x) == k) {
                    std::cout << x << " " << (n - x) << std::endl;
                    flag1 = false;
                    break;
                }
            }
        }
        if (flag1)std::cout << -1 << std::endl;
    }
    return 0;
}