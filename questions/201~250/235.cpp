//
// Created by Alex Liu on 2023/11/12.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

ll ans[2][2];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string a;
    char key;
    double res;
    ll tmp = 0;
    bool side = 0;
    int flag = 1;
    std::cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '=') {
            ans[side][0] += tmp * flag;
            tmp = 0;
            side = 1;
            flag = 1;
        } else if (a[i] == '+') {
            ans[side][0] += tmp * flag;
            tmp = 0;
            flag = 1;
        } else if (a[i] == '-') {
            if (i != 0)ans[side][0] += tmp * flag;
            tmp = 0;
            flag = -1;
        } else if (a[i] >= '0' && a[i] <= '9') {
            tmp = tmp * 10 + (a[i] - '0');
        } else if (a[i] >= 'a' && a[i] <= 'z') {
            if (i == 0)tmp = flag;
            else if (a[i - 1] < '0' || a[i - 1] > '9')tmp = flag;
            key = a[i];
            ans[side][1] += tmp * flag;
            tmp = 0;
        }
        if (i == a.size() - 1)ans[side][0] += tmp * flag;
    }
    res = (ans[1][0] - ans[0][0]) * 1.0 / (ans[0][1] - ans[1][1]);
    printf("%c=%.3f", key, res);
    return 0;
}
