#include<bits/stdc++.h>

#define N 1000
//输入格式
//第一行一个数字 n ，代表节点数量
//接下来 n 行，每行若干个数字 m c_1 c_2 c_3 ... c_m ，其中第 i 行输入为与编号为 i 的节点相连接的节点数量 m 及对应节点编号 c_j

struct node {
    int m, child[N];
} nodes[N];
int maxlen = -1, vis[N], route[N], maxroute[N];

void dfs(int node, int length) {
    if (nodes[node].m == 1 && length != 1) {
        if (maxlen < length)for (int i = 1; i <= length; i++)maxroute[i] = route[i];
        maxlen = std::max(maxlen, length);
        return;
    }
    for (int i = 1; i <= nodes[node].m; i++) {
        if (!vis[nodes[node].child[i]]) {
            vis[nodes[node].child[i]] = 1;
            route[length + 1] = nodes[node].child[i];
            dfs(nodes[node].child[i], length + 1);
            vis[nodes[node].child[i]] = 0;
        }

    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> heads;
    // 存储节点数据
    for (int i = 1; i <= n; i++) {
        std::cin >> nodes[i].m;
        for (int j = 1; j <= nodes[i].m; j++)std::cin >> nodes[i].child[j];
        if (nodes[i].m == 1)heads.push_back(i);
    }
    // 查找主链
    for (auto h: heads) {
        route[1] = h;
        dfs(h, 1);
    }
    for (int i = 1; i <= maxlen; i++)std::cout << maxroute[i] << " ";
    return 0;
}
