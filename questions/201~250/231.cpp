//
// Created by Alex Liu on 2023/10/4.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
#define M 911451407
typedef long long ll;

ll quickPow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b % 2 != 0)res = (res * a) % M;
        a = (a * a) % M;
        b /= 2;
    }
    return res;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    ll n;
    std::cin >> n;
    std::cout << (n % M) * (quickPow(2, n - 1)) % M;

    return 0;
}
