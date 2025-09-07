//
// Created by Alex Liu on 2023/8/18.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

struct data {
    ll day, cnt;

    bool operator<(const data &rhs) const {
        return day < rhs.day;
    }
} lists[105];

int T, n;
ll cur, k;
bool flag;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::cin >> T;
    while (T--) {
        cur = 0;
        flag = true;
        std::cin >> n >> k;
        lists[0].day = 0;
        for (int i = 1; i <= n; i++) {
            std::cin >> lists[i].day >> lists[i].cnt;
        }
        std::sort(lists + 1, lists + 1 + n);
        for (int i = 1; i <= n; i++) {
            cur += (lists[i].day - lists[i - 1].day) * k;
            if (lists[i].cnt > cur) {
                flag = false;
                break;
            }
            cur -= lists[i].cnt;
        }
        std::cout << (flag ? "Yes" : "No") << std::endl;
    }
    return 0;
}