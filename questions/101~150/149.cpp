#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, maxd = 0, tmpa, tmpb, tmpc, tmpd, tmpm, mins = 0;
    cin >> m >> n;
    //最大公因数
    for (int i = 1; i * i <= m; i++) {
        if (m % i == 0) {
            tmpa = i;
            tmpb = m / i;
            for (int j = 1; j * j <= n; j++) {
                if (n % j == 0) {
                    tmpc = j;
                    tmpd = n / j;
                    if (tmpa == tmpc || tmpa == tmpd) {
                        tmpm = tmpa;
                    } else if (tmpb == tmpc || tmpb == tmpd) {
                        tmpm = tmpb;
                    }
                    if (tmpm > maxd) {
                        maxd = tmpm;
                    }
                }
            }
        }
    }
    //最小公倍数
    for (int i = max(m, n); i <= m * n; i++) {
        if (i % m == 0 && i % n == 0) {
            mins = i;
            break;
        }
    }
    cout << maxd << " " << mins;
    return 0;
}
