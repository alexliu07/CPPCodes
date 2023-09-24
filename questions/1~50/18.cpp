#include<stdio.h>
int main() {
    int usage;
    double prize;
    scanf("%d", &usage);
    if (usage <= 150) {
        prize = usage * 0.4463;
    }
    else if (usage <= 400 && usage > 150) {
        prize = 150 * 0.4463 + (usage - 150) * 0.4663;
    }
    else if (usage > 400) {
        prize = 150 * 0.4463 + 250 * 0.4663 + (usage - 400) * 0.5663;
    }
    printf("%.1f", prize);
    return 0;
}