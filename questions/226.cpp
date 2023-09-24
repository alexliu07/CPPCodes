//
// Created by Alex Liu on 2023/9/24.
//

#include <bits/stdc++.h>

#define N 100
#define INF 0x7fffffff
typedef long long ll;

int blocks[N][N];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int T, n;
    std::cin >> T;
    while (T--) {
        std::cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                std::cin >> blocks[i][j];
            }
        }
        int i = 1, j = 1, up = 0, down = 0, lasti, lastj;
        std::vector<int> way;
        way.push_back(blocks[i][j]);
        for (int a = 2; a <= n * n; a++) {
            lasti = i;
            lastj = j;
            if (i % 2 == 1) {
                if (j == n)i++;
                else j++;
            } else {
                if (j == 1)i++;
                else j--;
            }
            way.push_back(blocks[i][j]);
            if (blocks[lasti][lastj] < blocks[i][j])up += blocks[i][j] - blocks[lasti][lastj];
            else if (blocks[lasti][lastj] > blocks[i][j])down += blocks[lasti][lastj] - blocks[i][j];
        }
        if (up <= down) {
            for (int a = 0; a < n * n; a++) {
                std::cout << way[a];
                if (a != n * n - 1)std::cout << " ";
            }
        } else {
            for (int a = n * n - 1; a >= 0; a--) {
                std::cout << way[a];
                if (a != 0)std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
