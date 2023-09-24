#include <bits/stdc++.h>

#define _for(i, a, b) for (int i = (a); i <= (b); i++)
#define INF 0x7fffffff
#define N 1005

int block[N][N], k, tmp[N];

void change(int n) {
    _for(i, 1, k) tmp[(i % k) + 1] = block[i][n];
    _for(i, 1, k) block[i][n] = tmp[i];
}

int main() {
    //	freopen("lock.in", "r", stdin);
    //	freopen("lock.out", "w", stdout);
    bool flag;
    int T, n, maxtmp, mintmp, maxC, minC, count;
    std::cin >> T >> k;
    _for(x, 1, T) {
        std::cin >> n;
        _for(i, 1, k) _for(j, 1, n) std::cin >> block[i][j];
        minC = INF;
        _for(a, 1, pow(k, n)) {
            flag = true;
            maxC = -INF;
            _for(i, 1, k) {
                maxtmp = -INF;
                mintmp = INF;
                _for(j, 1, n) {
                    maxtmp = std::max(maxtmp, block[i][j]);
                    mintmp = std::min(mintmp, block[i][j]);
                }
                maxC = std::max(maxC, (maxtmp - mintmp));
            }
            minC = std::min(maxC, minC);
            count = 1;
            for (int b = n - 1; b >= 0; b--) {
                if (a % (int) (pow(k, b)) == 0) {
                    change(count);
                    flag = false;
                    break;
                }
                count++;
            }
            if (flag) {
                change(n);
            }
        }
        std::cout << minC;
    }
    return 0;
}