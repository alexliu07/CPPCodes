//
// Created by Alex Liu on 2023/12/24.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int lens[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

ll calnum(ll n) {
    ll total = 0;
    while (n != 0) {
        total += lens[n % 10];
        n /= 10;
    }
    return total;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    ll l, r;
    std::cin >> l >> r;
    std::priority_queue<ll> finals;
    ll tmplen = 1;
    if (l == r) {
        std::cout << 1;
        return 0;
    }
    for (int i = l + 1; i <= r; i++) {
        if (calnum(i) == calnum(i - 1))tmplen++;
        else {
            finals.push(tmplen);
            tmplen = 1;
        }
    }
    std::cout << finals.top();
    return 0;
}
