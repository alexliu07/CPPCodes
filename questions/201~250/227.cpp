//
// Created by Alex Liu on 2023/10/3.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

struct data {
    int first, second;

    bool operator<(const data &rhs) const {
        return rhs.first < first;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m1, m2;
    std::cin >> n >> m1 >> m2;
    std::vector<std::pair<int, int> > nation(m1 + 1), inter(m2 + 1);
    std::vector<int> cnt1(n + 1), cnt2(n + 1);
    std::priority_queue<int, std::vector<int>, std::greater<int> > bridge1, bridge2;
    std::priority_queue<data> flight1, flight2;
    for (int i = 1; i <= m1; i++) {
        std::cin >> nation[i].first >> nation[i].second;
    }
    for (int i = 1; i <= m2; i++) {
        std::cin >> inter[i].first >> inter[i].second;
    }
    std::sort(nation.begin() + 1, nation.end());
    std::sort(inter.begin() + 1, inter.end());
    for (int i = 1; i <= n; i++) {
        bridge1.push(i);
        bridge2.push(i);
    }
    //国内
    for (int i = 1; i <= m1; i++) {
        while (!flight1.empty() && flight1.top().first < nation[i].first) {
            bridge1.push(flight1.top().second);
            flight1.pop();
        }
        if (!bridge1.empty()) {
            int x = bridge1.top();
            bridge1.pop();
            flight1.push({nation[i].second, x});
            cnt1[x]++;
        }
    }
    //国际
    for (int i = 1; i <= m2; i++) {
        while (!flight2.empty() && flight2.top().first < inter[i].first) {
            bridge2.push(flight2.top().second);
            flight2.pop();
        }
        if (!bridge2.empty()) {
            int x = bridge2.top();
            bridge2.pop();
            flight2.push({inter[i].second, x});
            cnt2[x]++;
        }
    }
    std::vector<int> pre1(n + 1), pre2(n + 1);
    for (int i = 1; i <= n; i++) {
        pre1[i] = pre1[i - 1] + cnt1[i];
        pre2[i] = pre2[i - 1] + cnt2[i];
    }
    int ans = -INF;
    for (int i = 0; i <= n; i++) {
        ans = std::max(ans, pre1[i] + pre2[n - i]);
    }
    std::cout << ans;
    return 0;
}
