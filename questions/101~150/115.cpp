#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    double result;
    cin >> a >> b >> c;
    result = (a/10)*1.0/(b*10+c);
    printf("%.2f",result);
    return 0;
}