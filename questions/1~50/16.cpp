#include<stdio.h>
int main() {
    int a, b, c, d, S;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &S);
    if (a + b == S || a + c == S || a + d == S || b + c == S || b + d == S || c + d == S) {
        printf("1");
    }
    else {
        printf("-1");
    }
    return 0;
}