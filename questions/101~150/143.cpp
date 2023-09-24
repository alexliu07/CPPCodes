#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double sum;
    cin >> n;
    if(n <= 15){
        sum = 4 * n * 1.0 / 3;
    }else{
        sum = 2.5 * n * 1.0 - 10.5;
    }
    printf("%.2f",sum);
    return 0;
}