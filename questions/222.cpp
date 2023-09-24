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

    int T;
    ll n, d, k;
    std::cin >> T;
    while (T--) {
        std::cin >> n >> d >> k;
        bool complete = false;
        ll minD = n - 1, maxD, tmpN, add = 0, left;
        left = (n - 1) % k;
        if (left == 0) {
            tmpN = n - 1;
            complete = true;
        } else {
            tmpN = (n - 1) - left;
            add = left * (tmpN / k);
        }
        maxD = ((k + tmpN) * (tmpN / k)) / 2 + add;
        if (d < minD || d > maxD || k > n - 1) {
            std::cout << "NO" << std::endl;
            continue;
        }
        if (n == 1 && d == 0 && k == 0) {
            std::cout << "YES" << std::endl << std::endl;
            continue;
        }
        ll cur = 0;
        for (int i = 1; i <= (n - 1) / k; i++) {

        }
    }
    return 0;
}
