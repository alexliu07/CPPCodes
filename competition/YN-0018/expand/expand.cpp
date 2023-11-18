#include<bits/stdc++.h>
#define N 500005
typedef long long ll;
int main() {
    freopen("expand.in", "r", stdin);
    freopen("expand.out", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int c, n, m, q, kx, ky, typeX = 0, typeY = 0, p, v;
    std::cin >> c >> n >> m >> q;
    std::vector<int> X(n + 1), Y(m + 1);
    for(int i = 1; i <= n; i++)std::cin >> X[i];
    for(int i = 1; i <= n; i++)std::cin >> Y[i];
    if(n == 1 && m == 1)std::cout << 1;
    else {
        if(n == 2)typeX = X[0] < X[1];
        if(m == 2)typeY = Y[0] < Y[1];
        if(n == 2 && m == 2) {
            if((typeX != typeY) && ((X[0] - Y[1]) * (X[1] - Y[0]) <= 0))std::cout << 0;
            else std::cout << 1;
        } else if(n == 1 && m == 2) {
            if(X[0] < Y[0] || X[0] > Y[1])std::cout << 1;
            else std::cout << 0;
        } else if(n == 2 && m == 1) {
            if(X[1] < Y[0] || X[0] > Y[0])std::cout << 1;
            else std::cout << 0;
        }
    }

    while(q--) {
        std::cin >> kx >> ky;
        for(int i = 1; i <= kx; i++) {
            std::cin >> p >> v;
            X[p] = v;
        }
        for(int i = 1; i <= ky; i++) {
            std::cin >> p >> v;
            Y[p] = v;
        }
        if(n == 1 && m == 1) {
            std::cout << 1;
            continue;
        }
        if(n == 2)typeX = X[0] < X[1];
        if(m == 2)typeY = Y[0] < Y[1];
        if(n == 2 && m == 2) {
            if((typeX != typeY) && ((X[0] - Y[1]) * (X[1] - Y[0]) <= 0))std::cout << 0;
            else std::cout << 1;
        } else if(n == 1 && m == 2) {
            if(X[0] < Y[0] || X[0] > Y[1])std::cout << 1;
            else std::cout << 0;
        } else if(n == 2 && m == 1) {
            if(X[1] < Y[0] || X[0] > Y[0])std::cout << 1;
            else std::cout << 0;
        }
    }
    return 0;
}
