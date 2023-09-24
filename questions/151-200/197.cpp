//
// Created by liuyu on 2023/4/30.
//

#include <bits/stdc++.h>

#define N 100


int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0};
int m, n, blocks[N][N], start[2], end[2], visit[N][N], answer[N][2];
bool flag = true;

void dfs(int x, int y, int step) {
    //退出搜索
    if (x == end[0] && y == end[1]) {
        //有路
        flag = false;
        //输出
        std::cout << "(" << start[0] << "," << start[1] << ")";
        for (int i = 1; i <= step - 1; i++)std::cout << "->(" << answer[i][0] << "," << answer[i][1] << ")";
        std::cout << std::endl;
        return;
    }
    //遍历每种情况
    for (int i = 0; i <= 3; i++) {
        //计算下一步
        int targetx = x + dx[i], targety = y + dy[i];
        //判断边界
        if (targetx < 1 || targetx > m || targety < 1 || targety > n) continue;
        //判断障碍物
        if (!blocks[targetx][targety]) continue;
        //判断是否已经走过
        if (visit[targetx][targety]) continue;
        //记录已走过
        visit[targetx][targety] = 1;
        //记录答案
        answer[step][0] = targetx;
        answer[step][1] = targety;
        //走入下一格
        dfs(targetx, targety, step + 1);
        //撤销记录
        visit[targetx][targety] = 0;
    }
}

int main() {
    std::cin >> m >> n;
    for (int i = 1; i <= m; i++)for (int j = 1; j <= n; j++)std::cin >> blocks[i][j];
    std::cin >> start[0] >> start[1] >> end[0] >> end[1];
    visit[start[0]][start[1]] = 1;
    dfs(start[0], start[1], 1);
    if (flag)std::cout << -1;
    return 0;
}
