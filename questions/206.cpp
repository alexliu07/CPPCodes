//
// Created by Alex Liu on 2023/7/17.
//

#include <bits/stdc++.h>

#define _for(i, a, b) for(int i = (a);i <= b;i++)
#define N 100005
#define INF 0x7fffffffffffffff
typedef long long ll;

#define lson (o*2)
#define rson (o*2+1)
#define mid ((l+r)/2)

ll a[2][N];

struct data {
    ll posMax, posMin, negMax, negMin;
} datas[2][N * 4];


void pushup(int index, int o) {
    datas[index][o].posMax = std::max(datas[index][lson].posMax, datas[index][rson].posMax);
    datas[index][o].posMin = std::min(datas[index][lson].posMin, datas[index][rson].posMin);
    datas[index][o].negMax = std::max(datas[index][lson].negMax, datas[index][rson].negMax);
    datas[index][o].negMin = std::min(datas[index][lson].negMin, datas[index][rson].negMin);
}

void build(int index, int o, int l, int r) {
    if (l == r) {
        if (a[index][l] >= 0) {
            datas[index][o].posMin = datas[index][o].posMax = a[index][l];
            datas[index][o].negMin = INF;
            datas[index][o].negMax = -INF;
        } else {
            datas[index][o].negMin = datas[index][o].negMax = a[index][l];
            datas[index][o].posMin = INF;
            datas[index][o].posMax = -INF;
        }
        return;
    }
    build(index, lson, l, mid);
    build(index, rson, mid + 1, r);
    pushup(index, o);
}

ll queryPosMax(int index, int o, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return datas[index][o].posMax;
    }
    ll ans = -INF;
    if (x <= mid)ans = std::max(ans, queryPosMax(index, lson, l, mid, x, y));
    if (y > mid)ans = std::max(ans, queryPosMax(index, rson, mid + 1, r, x, y));
    return ans;
}

ll queryPosMin(int index, int o, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return datas[index][o].posMin;
    }
    ll ans = INF;
    if (x <= mid)ans = std::min(ans, queryPosMin(index, lson, l, mid, x, y));
    if (y > mid)ans = std::min(ans, queryPosMin(index, rson, mid + 1, r, x, y));
    return ans;
}

ll queryNegMax(int index, int o, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return datas[index][o].negMax;
    }
    ll ans = -INF;
    if (x <= mid)ans = std::max(ans, queryNegMax(index, lson, l, mid, x, y));
    if (y > mid)ans = std::max(ans, queryNegMax(index, rson, mid + 1, r, x, y));
    return ans;
}

ll queryNegMin(int index, int o, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return datas[index][o].negMin;
    }
    ll ans = INF;
    if (x <= mid)ans = std::min(ans, queryNegMin(index, lson, l, mid, x, y));
    if (y > mid)ans = std::min(ans, queryNegMin(index, rson, mid + 1, r, x, y));
    return ans;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, q, l1, r1, l2, r2;
    ll nMax[2], nMin[2], pMax[2], pMin[2], result;
    bool isNeg[2], isPos[2];
    std::cin >> n >> m >> q;
    _for(i, 1, n)std::cin >> a[0][i];
    _for(i, 1, m)std::cin >> a[1][i];
    build(0, 1, 1, n);
    build(1, 1, 1, m);
    while (q--) {
        std::cin >> l1 >> r1 >> l2 >> r2;
        isNeg[0] = isNeg[1] = isPos[0] = isPos[1] = false;
        //求正负最大最小值
        nMax[0] = queryNegMax(0, 1, 1, n, l1, r1);
        nMin[0] = queryNegMin(0, 1, 1, n, l1, r1);
        pMax[0] = queryPosMax(0, 1, 1, n, l1, r1);
        pMin[0] = queryPosMin(0, 1, 1, n, l1, r1);
        nMax[1] = queryNegMax(1, 1, 1, m, l2, r2);
        nMin[1] = queryNegMin(1, 1, 1, m, l2, r2);
        pMax[1] = queryPosMax(1, 1, 1, m, l2, r2);
        pMin[1] = queryPosMin(1, 1, 1, m, l2, r2);
        if (nMax[0] != -INF && nMin[0] != INF)isNeg[0] = true;
        if (nMax[1] != -INF && nMin[1] != INF)isNeg[1] = true;
        if (pMax[0] != -INF && pMin[0] != INF)isPos[0] = true;
        if (pMax[1] != -INF && pMin[1] != INF)isPos[1] = true;
        //分类
        //正(负)  正
        //正     (正)负
        //负     正(负)
        //(正)负  负
        //正负    正负
        if (isPos[0] && isPos[1] && !isNeg[1])result = pMax[0] * pMin[1];
        else if (isPos[0] && !isNeg[0] && isNeg[1])result = pMin[0] * nMin[1];
        else if (isNeg[0] && !isPos[0] && isPos[1])result = nMax[0] * pMax[1];
        else if (isNeg[0] && isNeg[1] && !isPos[1])result = nMin[0] * nMax[1];
        else result = std::max(nMax[0] * pMax[1], pMin[0] * nMin[1]);
        //输出
        std::cout << result << std::endl;
    }
    return 0;
}
