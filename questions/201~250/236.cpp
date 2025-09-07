//
// Created by Alex Liu on 2023/11/13.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;
ll ans = 1;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, tmp;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        tmp = i;
        while (tmp % 10 == 0)tmp /= 10;
        ans *= tmp;
        while (ans % 10 == 0)ans /= 10;
        ans %= 1000000000;
        std::cout << tmp << " " << ans << "\n";
    }
    std::cout << ans % 10;
    return 0;
}
