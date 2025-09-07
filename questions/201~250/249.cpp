//
// Created by Alex Liu on 2023/12/31.
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
    ll n, m, p, cnt1, cnt2;
    bool flag1, flag2;
    std::cin >> T;
    while (T--) {
        std::cin >> n >> m >> p;
        flag1 = flag2 = false;
        cnt1 = cnt2 = 0;
        while (n != 0) {
            if (n % p == 0) {
                flag1 = true;
                break;
            }
            cnt1++;
            n -= n % p;
        }
        while (m != 0) {
            if (m % p == 0) {
                flag2 = true;
                break;
            }
            cnt2++;
            m -= m % p;
        }
        if (flag1 && flag2)std::cout << "Lasting Battle";
        else if (flag1)std::cout << "Alice";
        else if (flag2)std::cout << "Bob";
        else std::cout << (cnt1 <= cnt2 ? "Alice" : "Bob");
        std::cout << "\n";
    }
    return 0;
}
