#include<bits/stdc++.h>

typedef long long ll;
#define INF 0x7fffffffffffffff
#define N 100005
#define _for(i, a, b) for(int i=(a);i<=(b);i++)

using namespace std;
ll a[N], b[N], c[1005][1005], minNum[1005];

int main() {
    int n, m, q, l1, l2, r1, r2;
    ll maxNum;
    //读入
    cin >> n >> m >> q;
    _for(i, 1, n)cin >> a[i];
    _for(i, 1, m)cin >> b[i];
    //运算矩阵
    _for(i, 1, n)_for(j, 1, m)c[i][j] = a[i] * b[j];
    //遍历轮数
    _for(i, 1, q) {
        cin >> l1 >> r1 >> l2 >> r2;
        maxNum = -INF;
        //查找每一行最小值
        _for(j, l1, r1) {
            //初始化
            minNum[j] = INF;
            _for(k, l2, r2)minNum[j] = min(minNum[j], c[j][k]);
        }
        //查找最小值里面的最大值
        _for(j, l1, r1)maxNum = max(maxNum, minNum[j]);
        //输出
        cout << maxNum << endl;
    }
    return 0;
}