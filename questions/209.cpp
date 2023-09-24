//
// Created by Alex Liu on 2023/7/19.
//

#include <bits/stdc++.h>

#define _for(i, a, b) for(int i = (a);i <= b;i++)
#define N 100005
#define INF 0x7fffffff
typedef long long ll;

struct Edge {
    int u, v, w;

    bool operator<(const Edge &rhs) const {//right hand side 右手边
        return w < rhs.w;
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m;
    std::cin >> n >> m;
    std::set<Edge> s1;
    std::vector<Edge> s2(m);
    //读入图并排序(set)
    for (int i = 0; i < m; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;
        s1.insert((Edge) {a, b, c});
    }
    //读入图并排序(vector)
    for (int i = 0; i < m; i++)std::cin >> s2[i].u >> s2[i].v >> s2[i].w;
    std::sort(s2.begin(), s2.end());
    //建立并查集
    std::vector<int> fa(n + 1);
    std::function<int(int)> find = [&](int x) {
        return fa[x] == x ? x : fa[x] = find(fa[x]);
    };
    //初始化并查集
    for (int i = 1; i <= n; i++)fa[i] = i;
    //初始化变量
    ll ans = 0, cnt = 0;
    //Kruskal算法(set)
    for (auto ss: s1) {
        int x = ss.u, y = ss.v, z = ss.w;
        //检查两点是否已连接
        if (find(x) != find(y)) {
            //计算答案
            ans += z;
            //合并
            fa[find(x)] = find(y);
            //计数
            cnt++;
            //如果生成树完毕则结束循环
            if (cnt == n - 1)break;
        }
    }
    //Kruskal算法(vector)
    for (int i = 0; i < m; i++) {
        int x = s2[i].u, y = s2[i].v, z = s2[i].w;
        //检查两点是否已连接
        if (find(x) != find(y)) {
            //计算答案
            ans += z;
            //合并
            fa[find(x)] = find(y);
            //计数
            cnt++;
            //如果生成树完毕则结束循环
            if (cnt == n - 1)break;
        }
    }
    //输出答案
    if (cnt == n - 1)std::cout << ans;
    else std::cout << "orz";
    return 0;
}