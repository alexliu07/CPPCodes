//
// Created by Alex Liu on 2024/1/22.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    ll n, x, cnt = 0;
    bool flag = false, flag2;
    std::priority_queue<ll, std::vector<ll>, std::greater<ll> > a;
    std::cin >> n;
    for (ll i = 1; i <= n; i++) {
        std::cin >> x;
        a.push(x);
    }
    while (a.size() > 1) {
        ll t1 = a.top();
        a.pop();
        ll t2 = a.top();
        a.pop();
        if (t2 % t1 != 0) {
            flag = true;
            break;
        }
        ll t3 = t2 / t1;
        ll tmp = t3;
        ll t4 = -1;
        flag2 = false;
        while (tmp != 0) {
            if (tmp != 1 && tmp % 2 != 0) {
                flag2 = true;
                break;
            }
            tmp /= 2;
            t4++;
        }
        if (flag2) {
            flag = true;
            break;
        }
        cnt += t4;
        a.push(t2 * 2);
    }
    std::cout << (flag ? -1 : cnt);
    return 0;
}
