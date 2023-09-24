#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    char b[255];
    int top = 0, status = 0;
    cin >> a;
    for(int i=0;i<a.length();i++){
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
    }
    if(b[top-1] == '('){
        printf("NO");
    }
    else if (status == 1) {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}