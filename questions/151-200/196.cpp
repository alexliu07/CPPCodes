//
// Created by liuyu on 2023/4/30.
//

#include <bits/stdc++.h>

#define N 10

using namespace std;
int num[N][N], row[N][N], col[N][N], block[N][N];

//九宫格列表判断
int g[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
        {0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
        {0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
        {0, 4, 4, 4, 5, 5, 5, 6, 6, 6},
        {0, 4, 4, 4, 5, 5, 5, 6, 6, 6},
        {0, 4, 4, 4, 5, 5, 5, 6, 6, 6},
        {0, 7, 7, 7, 8, 8, 8, 9, 9, 9},
        {0, 7, 7, 7, 8, 8, 8, 9, 9, 9},
        {0, 7, 7, 7, 8, 8, 8, 9, 9, 9}
};

void dfs(int x, int y) {
    if (x > 9) {
        //输出
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                cout << num[i][j];
                if (j == 9)cout << endl;
                else cout << " ";
            }
        }
        //终止程序
        exit(0);
    }
    //可以填数
    if (num[x][y] == 0) {
        for (int i = 1; i <= 9; i++) {
            //该数字可以填入此空
            if (!row[x][i] && !col[y][i] && !block[g[x][y]][i]) {
                //标记
                row[x][i] = col[y][i] = block[g[x][y]][i] = 1;
                num[x][y] = i;
                //下一格
                if (y != 9)dfs(x, y + 1);
                else dfs(x + 1, 1);
                //撤销标记
                row[x][i] = col[y][i] = block[g[x][y]][i] = 0;
                num[x][y] = 0;
            }

        }
    } else {
        //已经有数字，进入下一位
        if (y != 9)dfs(x, y + 1);
        else dfs(x + 1, 1);
    }
}

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            //读入
            cin >> num[i][j];
            //初始化标记
            if (num[i][j] != 0)row[i][num[i][j]] = col[j][num[i][j]] = block[g[i][j]][num[i][j]] = 1;
        }
    }
    dfs(1, 1);
    return 0;
}
