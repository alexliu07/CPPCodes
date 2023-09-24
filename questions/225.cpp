//
// Created by Alex Liu on 2023/9/17.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;
std::string s;
int n, k;

bool check(int mid) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            cnt++;
            i += mid - 1;
        }
    }
    return cnt <= k;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int T;
    std::cin >> T;
    while (T--) {
        std::cin >> n >> k >> s;
        int l = 0, r = n + 1, mid, lastCorrect;
        while (l + 1 < r) {
            mid = (l + r) / 2;
            if (check(mid)) {
                r = mid;
                lastCorrect = mid;
            } else l = mid;
        }
        std::cout << lastCorrect << std::endl;
    }
    return 0;
}
