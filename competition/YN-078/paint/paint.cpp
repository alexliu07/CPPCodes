#include <bits/stdc++.h>

#define _for(i, a, b) for (int i = (a); i <= (b); i++)
#define N 1005
typedef long long ll;

ll block[N][N];

int main() {
    //	freopen("paint.in", "r", stdin);
    //	freopen("paint.out", "w", stdout);
    int T, n, m, q, opt, x;
    ll c;
    std::cin >> T;
    _for(y, 1, T) {
        std::cin >> n >> m >> q;
        _for(i, 1, n) _for(j, 1, m) block[i][j] = 0;
        _for(z, 1, q) {
            std::cin >> opt >> x >> c;
            if (opt == 0) {
                _for(i, 1, m) block[x][i] = c;
            } else if (opt == 1) {
                _for(i, 1, n) block[i][x] = c;
            }
        }
        _for(i, 1, n) {
            _for(j, 1, m) std::cout << block[i][j] << " ";
            std::cout << std::endl;
        }
    }
    return 0;
}