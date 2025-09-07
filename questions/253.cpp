//
// Created by Alex Liu on 2024/1/22.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, x;
    bool flag;
    std::cin >> n;
    std::priority_queue<std::pair<ll, std::pair<int, int> >, std::vector<std::pair<ll, std::pair<int, int> > >, std::greater<std::pair<ll, std::pair<int, int> > > > clothes, trash;
    std::vector<int> front(n + 1), back(n + 1);
    std::vector<ll> price(n + 1);
    for (int i = 1; i <= n; i++)std::cin >> price[i];
    for (int i = 1; i <= n; i++)std::cin >> front[i];
    for (int i = 1; i <= n; i++)std::cin >> back[i];
    for (int i = 1; i <= n; i++)clothes.push({price[i], {front[i], back[i]}});
    std::cin >> m;
    for (int i = 1; i <= m; i++) {
        flag = true;
        std::cin >> x;
        std::pair<int, std::pair<int, int> > tmpcloth1, tmpcloth2;
        while (!trash.empty()) {
            tmpcloth1 = trash.top();
            trash.pop();
            if (tmpcloth1.second.first == x || tmpcloth1.second.second == x) {
                flag = false;
                break;
            } else {
                clothes.push(tmpcloth1);
                tmpcloth1 = {0, {0, 0}};
            }
        }
        while (!clothes.empty()) {
            tmpcloth2 = clothes.top();
            clothes.pop();
            if (tmpcloth2.second.first == x || tmpcloth2.second.second == x) {
                flag = false;
                break;
            } else {
                trash.push(tmpcloth2);
                tmpcloth2 = {0, {0, 0}};
            }
        }
        if (flag) {
            std::cout << "-1 ";
            continue;
        }
        if (tmpcloth1.first != 0 && tmpcloth2.first != 0) {
            if (tmpcloth1.first < tmpcloth2.first) {
                std::cout << tmpcloth1.first;
                clothes.push(tmpcloth2);
            } else {
                std::cout << tmpcloth2.first;
                clothes.push(tmpcloth1);
            }
        } else if (tmpcloth1.first != 0)std::cout << tmpcloth1.first;
        else if (tmpcloth2.first != 0)std::cout << tmpcloth2.first;
        else std::cout << -1;
        std::cout << " ";
    }
    return 0;
}