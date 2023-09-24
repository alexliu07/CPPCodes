#include<stdio.h>
int main() {
    int n, h[1000], s = 0, c = 0;
    double p;
    scanf("%d", &n);
    for (int a = 0; a < n; a++) {
        scanf("%d", &h[a]);
        s = s + h[a];
    }
    p = s / n;
    for (int a = 0; a < n; a++) {
        if (h[a] > p) {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}