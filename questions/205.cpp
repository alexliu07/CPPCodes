//
// Created by Alex Liu on 2023/7/17.
//

#include <bits/stdc++.h>

#define _for(i, a, b) for(int i = (a);i <= b;i++)
#define N 100005
#define INF 0x7fffffff
typedef long long ll;

//常用量
#define lson (o*2)
#define rson (o*2+1)
#define mid ((l+r)/2)

int a[N], tagn[N * 4];
ll sumn[N * 4];

void pushup(int o) {
    sumn[o] = sumn[lson] + sumn[rson];
}

void add(int o, int l, int r, int v) {
    sumn[o] += (r - l + 1) * v;
    tagn[o] += v;
}

void pushdown(int o, int l, int r) {
    if (!tagn[o])return;
    add(lson, l, mid, tagn[o]);
    add(rson, mid + 1, r, tagn[o]);
    tagn[o] = 0;
}

void build(int o, int l, int r) {
    if (l == r) {
        sumn[o] = a[l];
        return;
    }
    build(lson, l, mid);
    build(rson, mid + 1, r);
    pushup(o);
}

ll querySum(int o, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return sumn[o];
    }
    ll sum = 0;
    pushdown(o, l, r);
    if (x <= mid)sum += querySum(lson, l, mid, x, y);
    if (y > mid)sum += querySum(rson, mid + 1, r, x, y);
    return sum;
}

void update(int o, int l, int r, int x, int y, int z) {
    if (l >= x && r <= y) {
        add(o, l, r, z);
        return;
    }
    pushdown(o, l, r);
    if (x <= mid)update(lson, l, mid, x, y, z);
    if (y > mid)update(rson, mid + 1, r, x, y, z);
    pushup(o);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    //数据读入
    int n, m, opt, x, y, k;
    std::cin >> n >> m;
    _for(i, 1, n)std::cin >> a[i];
    //构建树
    build(1, 1, n);
    while (m--) {
        std::cin >> opt >> x >> y;
        if (opt == 1) {
            std::cin >> k;
            update(1, 1, n, x, y, k);
        } else {
            std::cout << querySum(1, 1, n, x, y) << std::endl;
        }
    }
    return 0;
}
