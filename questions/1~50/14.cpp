#include<stdio.h>
#include<math.h>
int main() {
    double a, b;
    scanf("%lf", &a);
    if (a / 100 < 1) {
        b = a * 10;
    }
    else {
        b = floor(a / 100);
    }
    printf("%.0f", b);
    return 0;
}