//
// Created by liuyu on 2023/5/7.
//

#include <bits/stdc++.h>

#define N 500
int ans[N][N], dx[] = {-2, -2, -1, -1, 1, 1, 2, 2}, dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
std::queue<int> qx, qy;

int main() {
    int n, m, x, y;
    std::cin >> n >> m >> x >> y;
    memset(ans, -1, sizeof(ans));
    qx.push(x);
    qy.push(y);
    while (!qx.empty()) {
        //取出队列顶部
        int cx = qx.front();
        qx.pop();
        int cy = qy.front();
        qy.pop();
        for (int i = 0; i < 8; i++) {
            //计算下一格
            int tx = cx + dx[i];
            int ty = cy + dy[i];
            //判断边界
            if (tx < 1 || tx > n || ty < 1 || tx > m)continue;
            //判断是否走过
            if (ans[tx][ty] != -1)continue;
            //更新下一格数据
            ans[tx][ty] = ans[cx][cy] + 1;
            //把下一格进入队列
            qx.push(tx);
            qy.push(ty);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)std::cout << ans[i][j] << "    ";
        std::cout << std::endl;
    }
    return 0;
}
