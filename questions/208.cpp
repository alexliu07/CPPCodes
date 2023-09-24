//
// Created by Alex Liu on 2023/7/18.
//

#include <bits/stdc++.h>

#define _for(i, a, b) for(int i = (a);i <= b;i++)
#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::vector<int> a;
    int x;
    while (std::cin >> x)a.push_back(x);
    int n = a.size();
    std::vector<int> f1(n + 1, 1), f2(n + 1, 1);
    _for(i, 0, n - 1)_for(j, 0, i - 1)if (a[i] <= a[j])f1[i] = std::max(f1[i], f1[j] + 1);
    _for(i, 0, n - 1)_for(j, 0, i - 1)if (a[i] > a[j])f2[i] = std::max(f2[i], f2[j] + 1);
    std::cout << *std::max_element(f1.begin(), f1.end()) << std::endl << *std::max_element(f2.begin(), f2.end());
    return 0;
}