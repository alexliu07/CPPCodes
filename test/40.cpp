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

//叶子节点
int a[N];
//区间和
ll sumn[N * 4];
//最大值
int maxn[N * 4];
//标记
int tag[N * 4];

//计算区间和及最大值
void pushup(int o) {
    sumn[o] = sumn[lson] + sumn[rson];
    maxn[o] = std::max(maxn[lson], maxn[rson]);
}

//计算    v:要增加的数
void add(int o, int l, int r, ll v) {
    sumn[o] += (r - l + 1) * v;
    maxn[o] += v;
    tag[o] += v;
}

//下放标记
void pushdown(int o, int l, int r) {
    if (!tag[o])return;
    add(lson, l, mid, tag[o]);
    add(rson, mid + 1, r, tag[o]);
    tag[o] = 0;
}

//建造线段树     o:当前节点编号    l,r:当前所在区间
void build(int o, int l, int r) {
    //构建完毕
    if (l == r) {
        sumn[o] = maxn[o] = a[l];
        return;
    }
    //左区间
    build(lson, l, mid);
    //右区间
    build(rson, mid + 1, r);
    //计算
    pushup(o);
}

//查询区间和     x,y:目标区间
ll querySum(int o, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return sumn[o];
    }
    //先下放标记
    pushdown(o, l, r);
    ll ans = 0;
    if (x <= mid)ans += querySum(lson, l, mid, x, y);
    if (y > mid) ans += querySum(rson, mid + 1, r, x, y);
    return ans;
}

//查询区间最大值
int queryMax(int o, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return maxn[o];
    }
    //先下放标记
    pushdown(o, l, r);
    int ans = -INF;
    if (x <= mid)ans = std::max(ans, queryMax(lson, l, mid, x, y));
    if (y > mid)ans = std::max(ans, queryMax(rson, mid + 1, r, x, y));
    return ans;
}

//区间修改  z:修改的内容
void update(int o, int l, int r, int x, int y, int z) {
    if (l >= x && r <= y) {
        add(o, l, r, z);
        return;
    }
    //先下放标记
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
    int n;
    std::cin >> n;
    _for(i, 1, n)std::cin >> a[i];
    //构建树
    build(1, 1, n);
    return 0;
}
