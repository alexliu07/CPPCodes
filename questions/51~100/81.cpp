#include<stdio.h>
int main() {
    int n, K, tmp, S, count, sn, r, g;
    scanf("%d%d", &n, &K);
    count = 0;
    S = 0;
    g = 0;
    while (true) {
        if (count == 0) {
            g = S;
        }
        S = S + n + count;
        if (S < K && S > g) {
            g = S;
        }
        else if (S == K) {
            r = n + count;
            printf("%d", r);
            break;
        }
        else if (S > K) {
            r = n + count - 1;
            printf("%d", r);
            break;
        }
        count++;
    }
    return 0;
}