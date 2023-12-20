//
// Created by Alex Liu on 2023/12/3.
//

#include <bits/stdc++.h>

#define N 55
#define INF 0x7fffffff
typedef long long ll;

int f[N][N];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string s;
    std::cin >> s;
    int n = s.size();
    s = ' ' + s;
    memset(f, 0x3f, sizeof(f));
    for (int i = 1; i <= n; i++)f[i][i] = 1;
    for (int l = 2; l <= n; l++) {
        for (int i = 1; i + l - 1 <= n; i++) {
            int j = i + l - 1;
            if (s[i] == s[j])f[i][j] = std::min(f[i][j], std::min(f[i + 1][j], f[i][j - 1]));
            for (int k = i; k < j; k++)f[i][j] = std::min(f[i][j], f[i][k] + f[k + 1][j]);
        }
    }
    std::cout << f[1][n];
    return 0;
}
