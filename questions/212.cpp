//
// Created by Alex Liu on 2023/7/22.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string a;
    int num = 0, low = 0, big = 0;
    std::cin >> a;
    for (auto ss: a) {
        if (ss >= 48 && ss <= 57) {
            num++;
        } else if (ss >= 97 && ss <= 122) {
            low++;
        } else if (ss >= 65 && ss <= 90) {
            big++;
        }
    }
    std::cout << num << " " << low << " " << big;
    return 0;
}
