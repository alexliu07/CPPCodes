//
// Created by liuyu on 2023/4/30.
//

#include <bits/stdc++.h>

#define N 55

using namespace std;

int n, col[N], l[N], r[N], cnt = 0, line[N];

void dfs(int now) {
    if (now > n) {
        cnt++;
        //输出
        if (cnt <= 3) {
            for (int i = 1; i <= n; i++) {
                cout << line[i];
                if (i == n)cout << endl;
                else cout << ' ';
            }
        }
        return;
    }
    for (int i = 1; i <= n; i++) {
        //如果没有标记就继续向下寻找
        if (!col[i] && !l[now + i] && !r[now - i + n]) {
            //将该位置的列、斜行标记
            col[i] = l[now + i] = r[now - i + n] = 1;
            line[now] = i;
            //继续后续寻找
            dfs(now + 1);
            //撤销标记，回溯
            col[i] = l[now + i] = r[now - i + n] = 0;
        }
    }
}

int main() {
    cin >> n;
    dfs(1);
    cout << cnt;
    return 0;
}
