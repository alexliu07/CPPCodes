//
// Created by Alex Liu on 2023/8/17.
//

#include <bits/stdc++.h>

#define N 1000005
#define INF 0x7fffffff
typedef long long ll;

int learn[N], review[N], special[N], needReview[N], needLearn[N];

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, m, k, cnt;
    std::cin >> n >> m >> k;
    needLearn[0] = -INF;
    //读入要学习的天数
    for (int i = 1; i <= n; i++) {
        std::cin >> needLearn[i];
    }
    //读入特殊天数
    for (int i = 1; i <= m; i++) {
        std::cin >> special[i];
        //如果要学习的天数在特殊天数下，则推迟该学习天数
        for (int j = 1; j <= n; j++) {
            if (needLearn[j] == special[i])needLearn[j]++;
        }
    }
    //读入要复习的天数
    for (int i = 1; i <= k; i++) {
        std::cin >> needReview[i];
    }
    for (int i = 1; i <= n; i++) {
        //生成每日要学习的数量
        learn[needLearn[i]]++;
        //生成每日要复习的数量
        for (int j = 1; j <= k; j++) {
            review[needLearn[i] + needReview[j]]++;
        }
    }
    //如果特殊天数要复习，则推迟该复习
    for (int i = 1; i <= m; i++) {
        review[special[i] + 1] += review[special[i]];
        review[special[i]] = 0;
    }
    //将要学习的天数排序
    std::sort(needLearn + 1, needLearn + 1 + n);
    //计算总天数，即最后一个要学习的单词的最后一次复习
    cnt = needLearn[n] + needReview[k];
    //输出
    std::cout << cnt << std::endl;
    for (int i = 1; i <= cnt; i++) {
        std::cout << learn[i] << " " << review[i] << std::endl;
    }
    return 0;
}