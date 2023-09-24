//
// Created by liuyu on 2023/3/19.
//

#include <bits/stdc++.h>

#define N 5005
#define _for(i, a, b) for(int i=(a);i<=(b);i++)

using namespace std;

int fathers[N];

//并查集
int find(int x) {
    return fathers[x] == x ? x : fathers[x] = find(fathers[x]);
}

int main() {
    int n, m, p, x, y;
    cin >> n >> m >> p;
    //初始化亲戚
    _for(i, 1, n)fathers[i] = i;
    //处理
    while (m--) {
        cin >> x >> y;
        fathers[find(x)] = find(y);
    }
    //输出
    while (p--) {
        cin >> x >> y;
        if (find(x) == find(y)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
