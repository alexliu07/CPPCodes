#include<bits/stdc++.h>
typedef long long ll;

int main() {
    freopen("dict.in", "r", stdin);
    freopen("dict.out", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, flag;
    std::cin >> n >> m;
    std::vector<std::string> a(n + 1);
    for(int i = 1; i <= n; i++) {
        std::cin >> a[i];
        std::sort(a[i].begin(), a[i].end());
    }
    if(n == 1) {
        std::cout << 1;
        return 0;
    }
    for(int i = 1; i <= n; i++) {
        flag = 1;
        for(int j = 1; j <= n; j++) {
            if(j == i)continue;
            if(a[i][0] >= a[j][m - 1]) {
                flag = 0;
                break;
            }
        }
        std::cout << flag;
    }
    return 0;
}
