//
// Created by Alex Liu on 2023/10/29.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    s = " " + s;
    std::vector<ll> f(n + 1), pos(n + 1);
    std::vector<std::vector<int> > pre(n + 1, std::vector<int>(26));
    ll ans = 0;
    for (int i = 2; i <= n; i++) {
        if (s[i] == s[i - 1])pos[i] = i - 1;
        else pos[i] = pre[i - 1][s[i] - 'a'];
        if (pos[i]) {
            for (int ch = 0; ch < 26; ch++) {
                if (s[pos[i] - 1] - 'a' == ch)pre[i][ch] = pos[i - 1];
                else pre[i][ch] = pre[pos[i] - 1][ch];
            }
            f[i] = f[pos[i] - 1] + 1;
        }
        ans += f[i];
    }
    std::cout << ans;
    return 0;
}
