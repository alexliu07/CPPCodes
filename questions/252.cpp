//
// Created by Alex Liu on 2024/1/22.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

bool comp(std::pair<int, int> x1, std::pair<int, int> x2) {
    if (x1.first == x2.first)return x1.second > x2.second;
    return x1.first > x2.first;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, k, x, tmpcnt, cnt = 0;
    std::cin >> n >> k;
    std::vector<std::pair<int, int> > b;
    std::vector<int> indexes;
    b.push_back({0, 0});
    indexes.push_back(0);
    std::vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> x;
        b.push_back({x, i});
        indexes.push_back(i);
    }
    std::sort(b.begin() + 1, b.end(), comp);
    while (b.size() > 1) {
        ans[b[1].second] = cnt % 2 + 1;
        int targetj = 0;
        for (int i = 1; i < indexes.size(); i++) {
            if (indexes[i] == b[1].second) {
                targetj = i;
                break;
            }
        }
        int j = targetj + 1;
        tmpcnt = 1;
        while (tmpcnt <= k) {
            tmpcnt++;
            if (j >= indexes.size())break;
            int tindex = 0;
            ans[indexes[j]] = cnt % 2 + 1;
            for (int i = 2; i < b.size(); i++) {
                if (b[i].second == indexes[j]) {
                    tindex = i;
                    break;
                }
            }
            b.erase(b.begin() + tindex);
            indexes.erase(indexes.begin() + j);
        }
        j = targetj - 1;
        tmpcnt = 1;
        while (tmpcnt <= k) {
            tmpcnt++;
            if (j < 1)break;
            int tindex = 0;
            ans[indexes[j]] = cnt % 2 + 1;
            for (int i = 2; i < b.size(); i++) {
                if (b[i].second == indexes[j]) {
                    tindex = i;
                    break;
                }
            }
            b.erase(b.begin() + tindex);
            indexes.erase(indexes.begin() + j);
            j--;
        }
        indexes.erase(indexes.begin() + j + 1);
        b.erase(b.begin() + 1);
        cnt++;
    }
    for (int i = 1; i <= n; i++) {
        std::cout << ans[i];
    }

    return 0;
}
