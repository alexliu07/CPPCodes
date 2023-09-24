#include<stdio.h>
int main() {
    int n, max_height = 0, max_index, temp;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > max_height) {
            max_height = a[i];
            max_index = i;
        }
    }
    temp = a[0];
    a[0] = max_height;
    a[max_index] = temp;
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}