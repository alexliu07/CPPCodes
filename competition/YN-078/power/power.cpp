#include <bits/stdc++.h>

#define _for(i, a, b) for (int i = (a); i <= (b); i++)
typedef long long ll;
#define N 100000005

bool numbers[N];

int main() {
    //	freopen("power.in", "r", stdin);
    //	freopen("power.out", "w", stdout);
    ll n, tmp, count = 1;
    int k;
    std::cin >> n >> k;
    if (k == 1) {
        std::cout << n;
    } else {
        _for(i, 1, n) numbers[i] = false;
        _for(i, 2, n) {
            for (int j = k; pow(i, j) <= n; j++) {
                tmp = pow(i, j);
                if (!numbers[tmp]) {
                    count++;
                    numbers[tmp] = true;
                }
            }
        }
        std::cout << count;
    }
    return 0;
}