//
// Created by Alex Liu on 2023/10/4.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int goal[6][6] = {{0},
                  {0, 1, 1, 1, 1, 1},
                  {0, 0, 1, 1, 1, 1},
                  {0, 0, 0, 2, 1, 1},
                  {0, 0, 0, 0, 0, 1},
                  {0, 0, 0, 0, 0, 0}};
int mp[6][6];
int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2}, dy[] = {1, -1, 2, -2, 2, -2, 1, -1};
bool flag = false, steps;

int h() {
    int cnt = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cnt += (mp[i][j] != goal[i][j]);
        }
    }
    return cnt;
}

void dfs(int step, int x, int y, int lim) {
    if (flag)return;
    if (!h()) {
        steps = step;
        flag = true;
        return;
    }
    for (int i = 0; i < 8; i++) {
        int tx = x + dx[i], ty = y + dy[i];
        if (tx < 1 || tx > 5 || ty < 1 || ty > 5)continue;
        if (step + h() <= lim) {
            std::swap(mp[x][y], mp[tx][ty]);
            dfs(step + 1, tx, ty, lim);
            std::swap(mp[x][y], mp[tx][ty]);
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int T;
    std::cin >> T;
    while (T--) {
        int sx, sy;
        flag = false;
        for (int i = 1; i <= 5; i++) {
            for (int j = 1; j <= 5; j++) {
                char ch;
                std::cin >> ch;
                if (ch == '*') {
                    mp[i][j] = 2;
                    sx = i;
                    sy = j;
                } else mp[i][j] = ch - '0';
            }
        }
        
    }
    return 0;
}
