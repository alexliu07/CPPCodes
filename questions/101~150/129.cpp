#include<bits/stdc++.h>
using namespace std;
int main(){
    const double p=3.1415926;
    double r,d,c,s;
    cin >> r;
    d = 2 * r;
    c = p * d;
    s = p * r * r;
    printf("%.4f %.4f %.4f",d,c,s);
    return 0;
}