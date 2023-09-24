//
// Created by liuyu on 2023/5/7.
//

#include <bits/stdc++.h>

#define N 200005
#define _for(i, a, b) for(int i=(a);i<=(b);i++)

bool o1, o2, xe;
int T, n, m, o[N], x[N], xei, o1i, o2i;
std::map<int, int> bottles;

void subtask1() {
    bool flag = true;
    int cnt = 0;
    _for(i, 1, m) {
        if (bottles[x[i]] == 0)cnt++;
        bottles[x[i]]++;
        if (cnt == n) {
            flag = false;
            printf("%d", i);
            break;
        }
    }
    if (flag)printf("-1");
}

void subtask4() {
    bool flag = true;
    _for(i, 1, m) {
        if (o[i] == 1) {
            bottles[x[i]]++;
        } else {
            _for(j, 1, n)if (j != x[i])bottles[j]++;
        }
        bool flagt = true;
        _for(i, 1, n)if (bottles[i] == 0)flagt = false;
        if (flagt) {
            flag = false;
            printf("%d", i);
            break;
        }
    }
    if (flag)printf("-1");
}


int main() {
    scanf("%d", &T);
    while (T--) {
        o1 = o2 = false;
        xe = true;
        bottles.clear();
        scanf("%d%d", &n, &m);
        _for(i, 1, m) {
            scanf("%d%d", &o[i], &x[i]);
            if (o[i] == 1 && !o1) {
                o1 = true;
                o1i = i;
            }
            if (o[i] == 2 && !o2) {
                o2 = true;
                o2i = i;
            }
            if (i > 1 && x[i] != x[i - 1] && xe) {
                xe = false;
                xei = i;
            }
        }
        //subtask1
        if (o1 && !o2) {
            subtask1();
            printf("\n");
            continue;
        };
        //subtask2
        if (!o1 && o2) {
            if (!xe)printf("%d", xei);
            else printf("-1");
            printf("\n");
            continue;
        }
        //subtask3
        if (xe) {
            if (o1 && o2) {
                int tmp = std::max(o1i, o2i);
                printf("%d", tmp);
            } else printf("-1");
            printf("\n");
            continue;
        }
        //subtask4
        subtask4();
        printf("\n");
    }
    return 0;
}
