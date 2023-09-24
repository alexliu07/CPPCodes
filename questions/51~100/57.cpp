#include<stdio.h>
int main() {
    int man[10000], woman[10000], m, n, k, tail[2], head[2];
    tail[0] = 0;
    tail[1] = 0;
    head[0] = 0;
    head[1] = 0;
    scanf("%d %d", &m, &n);
    scanf("%d", &k);
    for (int i = 0; i < m; i++) {
        man[tail[0]] = i + 1;
        tail[0]++;
    }
    for (int i = 0; i < n; i++) {
        woman[tail[1]] = i + 1;
        tail[1]++;
    }
    for (int i = 0; i < k; i++) {
        printf("%d %d\n", man[head[0]], woman[head[1]]);
        man[tail[0]] = man[head[0]];
        woman[tail[1]] = woman[head[1]];
        tail[0]++;
        tail[1]++;
        head[0]++;
        head[1]++;
    }
    return 0;
}