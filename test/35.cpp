//
// Created by liuyu on 2023/3/19.
//

#include <bits/stdc++.h>

#define N 1000
#define _for(i, a, b) for(int i=(a);i<=(b);i++)

using namespace std;
//处理：pre[i]=pre[i-1]+a[i]
//读取a[x]~a[y]的和：pre[y]-pre[x-1]
int a[N], pre[N];

int main() {
    int n, x, y;
    pre[0] = 0;
    //读入n,a
    cin >> n;
    _for(i, 1, n)cin >> a[i];
    //预处理
    _for(i, 1, n)pre[i] = pre[i - 1] + a[i];
    //读取目标区间
    cin >> x >> y;
    cout << pre[y] - pre[x - 1];
    return 0;
}
