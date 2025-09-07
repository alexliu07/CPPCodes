//
// Created by Alex Liu on 2024/1/24.
//

#include <bits/stdc++.h>

#define N 10005
#define INF 0x7fffffff
typedef long long ll;

ll f[N];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, sh = 0, sm = 0, eh = 0, em = 0, C;
    bool flag = true;
    std::string ts, te;
    std::cin >> ts >> te >> n;
    std::vector<std::pair<int, int> > p;
    for (auto ss: ts) {
        if (ss == ':') {
            flag = false;
            continue;
        }
        if (flag)sh = sh * 10 + (ss - '0');
        else sm = sm * 10 + (ss - '0');
    }
    flag = true;
    for (auto ss: te) {
        if (ss == ':') {
            flag = false;
            continue;
        }
        if (flag)eh = eh * 10 + (ss - '0');
        else em = em * 10 + (ss - '0');
    }
    if (sh > eh)C = (23 - sh) * 60 + (60 - sm) + eh * 60 + em;
    else C = (eh - sh) * 60 + (em - sm);
    std::cout << C;
    for (int i = 1; i <= n; i++) {
        int c, w, a;
        std::cin >> c >> w >> a;
        a = (a == 0 ? C / c : a);
        for (int k = 1; k <= a; k *= 2) {
            a -= k;
            p.push_back({k * c, k * w});
        }
        if (a)p.push_back({a * c, a * w});
    }
    for (auto pp: p) {
        for (int j = C; j >= pp.first; j--) {
            f[j] = std::max(f[j], f[j] - pp.first) + pp.second;
        }
    }
    std::cout << f[C];
    return 0;
}
