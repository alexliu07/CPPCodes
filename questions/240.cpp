//
// Created by Alex Liu on 2023/11/14.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, k, a, b, c;
    std::cin >> n >> k;
    std::vector<int> file(n + 1), mem(n + 1);
    for (int i = 1; i <= n; i++)file[i] = i;
    while (k--) {
        std::cin >> a >> b >> c;
        for (int i = 1; i <= b - a + 1; i++)mem[i] = file[a + i - 1];
        file.erase(file.begin() + a, file.begin() + b + 1);
        file.insert(file.begin() + (c + 1), mem.begin() + 1, mem.begin() + (b - a + 2));
    }
    for (int i = 1; i <= 10; i++)std::cout << file[i] << "\n";
    return 0;
}
