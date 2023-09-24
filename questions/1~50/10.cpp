#include<stdio.h>
#include<math.h>
int main() {
    double weight, prize;
    scanf("%lf", &weight);
    if (weight <= 20) {
        prize = ceil(weight) * 1.68;
    }
    else {
        prize = 20 * 1.68 + ceil(weight - 20) * 1.98;
    }
    printf("%.2f", prize);
    return 0;
}