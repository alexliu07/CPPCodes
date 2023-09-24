//
// Created by liuyu on 2023/4/2.
//

#include <bits/stdc++.h>

#define N 1000

using namespace std;
int a[N], n;
vector<int> b;

int main() {
    //静态数组去重
    sort(a + 1, a + n + 1);
    int m = unique(a + 1, a + n + 1) - a - 1;
    //m为去重后的长度
    //动态数组去重
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    //去重后可使用b的相关函数
    return 0;
}
