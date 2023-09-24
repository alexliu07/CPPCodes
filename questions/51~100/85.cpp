#include<stdio.h>
int main() {
    char a[200], b[200];
    int i = 0, top = 0, status = 0;
    scanf("%s", &a);
    while (a[i] != '@') {
        if (a[i] == '(') {
            b[top] = '(';
            top++;
        }
        if (a[i] == ')') {
            if (b[top - 1] != '(') {
                status = 1;
                break;
            }
            else {
                b[top - 1] = 0;
                top--;
            }
        }
        i++;
    }
    if (status == 1) {
        printf("No");
    }
    else {
        printf("Yes");
    }
    return 0;
}