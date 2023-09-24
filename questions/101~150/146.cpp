#include<bits/stdc++.h>
using namespace std;
int main(){
    double s=0;
    int k,n=1;
    cin >> k;
    while(s <= k){
        s += 1.0 / n;
        n++;
    }
    cout << n - 1;
    return 0;
}