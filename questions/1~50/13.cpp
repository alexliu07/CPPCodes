#include<stdio.h>
#include<math.h>
int main() {
    double a, b, c, p, s;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a && abs(a - b) < c && abs(a - c) < b && abs(b - c) < a) {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("%.2f", s);
    }
    else {
        printf("no");
    }
    return 0;
}