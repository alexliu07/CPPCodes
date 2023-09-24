#include<stdio.h>
int main() {
    int s;
    scanf("%d", &s);
    if (s <= 100 && s >= 90) {
        printf("A");
    }
    else if (s < 90 && s >= 80) {
        printf("B");
    }
    else if (s < 80 && s >= 70) {
        printf("C");
    }
    else if (s < 70 && s >= 60) {
        printf("D");
    }
    else if (s < 60 && s >= 0) {
        printf("E");
    }
    return 0;
}