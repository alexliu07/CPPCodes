#include<stdio.h>
#include<math.h>
int main() {
    int a;
    double b;
    scanf("%d", &a);
    if (a > 0) {
        b = sqrt(a);
        printf("%.5f", b);
    }
    else if (a < 0) {
        b = a * a;
        printf("%.5f", b);
    }
    return 0;
}