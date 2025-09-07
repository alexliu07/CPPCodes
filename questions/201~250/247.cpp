//
// Created by Alex Liu on 2023/12/24.
//

#include <bits/stdc++.h>

#define N 1000005
#define INF 0x7fffffff
typedef long long ll;
ll n, k;
bool flag;

void dfs(ll ans, ll step) {
    ll tmpans;
    if (step == k) {
        if (ans == n)flag = true;
        return;
    }
    for (int i = 0; i <= 1; i++) {
        if (i == 0)tmpans = ans - 1;
        else tmpans = ans * 2;
        dfs(tmpans, step + 1);
        if (flag)return;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int T;
    std::cin >> T;
    while (T--) {
        std::cin >> k >> n;
        flag = false;
        dfs(1, 0);
        std::cout << (flag ? "Yes" : "No") << "\n";
    }
    return 0;
}
