//
// Created by Alex Liu on 2023/7/22.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;


int gcd(int a, int b) {
    if (a % b == 0)return b;
    else if (b % a == 0)return a;
    else return b == 0 ? a : gcd(b, a % b);
}

ll lcm(int a, int b) {
    if (a % b == 0)return a;
    else if (b % a == 0)return b;
    else {
        int tmpg = gcd(a, b);
        if (tmpg == 1)return a * b;
        else return a * b / tmpg;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int T, n, g;
    ll l;
    std::cin >> T;
    while (T--) {
        ll res;
        std::cin >> n;
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                std::cin >> g;
                res = g;
                l = g;
                continue;
            }
            int tmp;
            std::cin >> tmp;
            g = gcd(g, tmp);
            l = lcm(l, tmp);
            res *= tmp;
        }
        ll ans = l * g;
        std::cout << (ans == res ? "Yes" : "No") << std::endl;
    }
    return 0;
}
