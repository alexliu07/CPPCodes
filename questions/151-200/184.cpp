//
// Created by liuyu on 2023/3/19.
//

#include <bits/stdc++.h>

#define _for(i, a, b) for(int i=(a);i<=(b);i++)
#define N 100000
typedef long long ll;

int P[N], b[N], count[N];

int main() {
    ll answer = 0;
    int A, B, C, n, m, x, y;
    //读入及初始化
    std::cin >> n >> m;
    _for(i, 1, m) {
        std::cin >> P[i];
        if (i >= 2) {
            //求差分
            x = P[i - 1];
            y = P[i];
            //确保x在y左侧
            if (x > y)std::swap(x, y);
            //修改差分数组
            b[x]++;
            b[y]--;
        }
    }
    _for(i, 1, n - 1) {
        //还原差分数组
        count[i] = count[i - 1] + b[i];
        std::cin >> A >> B >> C;
        //计算每个节点最低花费
        answer += std::min((ll) A * count[i], (ll) B * count[i] + C);
    }
    std::cout << answer;
    return 0;
}
