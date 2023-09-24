#include<stdio.h>
int main() {
    double s = 0, h = 100;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            h = h / 2;
            s = s + (2 * h);
        }
        else {
            s = s + (2 * h);
            h = h / 2;
        }
    }
    printf("%.6f %.6f", s, h);
    return 0;
}