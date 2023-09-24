#include<stdio.h>
int main() {
    char a[255], b[255];
    int i = 0, status = 0, top = 0;
    scanf("%s", &a);
    while (a[i] != 0) {
        if (a[i] == '(') {
            b[top] = '(';
            top++;
        }
        if (a[i] == '[') {
            b[top] = '[';
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
        if (a[i] == ']') {
            if (b[top - 1] != '[') {
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
    if (b[0] != 0) {
        printf("Wrong");
    }
    else if (status == 1) {
        printf("Wrong");
    }
    else {
        printf("OK");
    }
    return 0;
}