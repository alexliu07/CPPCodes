#include<stdio.h>
int main() {
    int n, s;
    scanf("%d", &n);
    s = 1;
    for (int a = 1; a <= n; a++) {
        s = (s + 1) * 2;
    }
    printf("%d", s);
    return 0;
}