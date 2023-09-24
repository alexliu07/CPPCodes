#include<stdio.h>
int main() {
    int a[1001], b[1001], s[1001], n, count = 0, status = 0, top = 0, p = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &b[i]);
        a[i] = i;
    }
    for (int i = 1; i <= n; i++) {
        //printf("%d",top);

        if (b[i] == s[top]) {
            top--;
            continue;
        }
        else {
            int k = 0, finded = 0, j;
            for (j = p; j <= n; j++) {
                if (b[i] == a[j]) {
                    finded = 1;
                    k = j;
                    //printf("aaaaaaaa");
                    //printf("%d",find);
                }
                //printf("%d",find);
            }
            if (finded == 0) {
                //printf("aaaa");
                status = 1;
                break;
            }
            else {
                for (int t = 1; t <= k - p + 1; t++)
                {
                    s[top + 1] = a[p + t - 1];
                    top++;
                }
                p = k + 1;
                top--;
            }
        }
    }
    if (status == 1) {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}