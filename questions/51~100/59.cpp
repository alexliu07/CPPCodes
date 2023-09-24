#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n + 1], count = 0, head = 0, tail = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        tail = (tail + 1) % (n + 1);
    }
    while (head != tail) {
        count++;
        if (count % 2 != 0) {
            printf("%d ", a[head]);
            head = (head + 1) % (n + 1);
        }
        else {
            a[tail] = a[head];
            tail = (tail + 1) % (n + 1);
            head = (head + 1) % (n + 1);
        }
    }
    return 0;
}