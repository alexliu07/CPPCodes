#include<stdio.h>
int main() {
    int a, b;
    scanf("%d", &a);
    if (a != 0 && a % 2 == 0) {
        b = a / 2;
        printf("%d", b);
    }
    else if (a % 2 != 0) {
        b = (a + 1) / 2;
        printf("%d", b);
    }
    return 0;
}