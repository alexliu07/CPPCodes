//
// Created by liuyu on 2023/5/7.
//

#include <bits/stdc++.h>

#define N 200005
#define _for(i, a, b) for(int i=(a);i<=(b);i++)

int T, n, m, o[N], x[N], cnt1, cnt2;
bool flag;
std::map<int, bool> o1, o2;

int main() {
    std::cin >> T;
    while (T--) {
        flag = false;
        o1.clear();
        o2.clear();
        std::cin >> n >> m;
        _for(i, 1, m) {
            std::cin >> o[i] >> x[i];
            if (flag)continue;
            if (o[i] == 1) {
                o1[x[i]] = true;
            } else {
                o2[x[i]] = true;
            }
            cnt1 = cnt2 = 0;
            _for(j, 1, n) {
                if (o1[j] && o2[j]) {
                    flag = true;
                } else if (o1[j]) {
                    cnt1++;
                    if (cnt1 == n)flag = true;
                } else if (o2[j]) {
                    cnt2++;
                    if (cnt2 == 2)flag = true;
                }
                if (flag) {
                    std::cout << i << std::endl;
                    break;
                }
            }
        }
        if (!flag) {
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}
