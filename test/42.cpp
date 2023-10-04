//
// Created by Alex Liu on 2023/10/4.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int T[N], a[N];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, maxn;
    std::cin >> n >> maxn;
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
        T[a[i]]++;
    }
    for (int i = 0; i <= maxn; i++) {
        for (int j = 1; j < T[i]; j++) {
            std::cout << i << " ";
        }
    }
    return 0;
}
