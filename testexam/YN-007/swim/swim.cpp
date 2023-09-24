#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("swim.in","r",stdin);
    freopen("swim.out","w",stdout);
    int i=0;
    double s,cur=0,step=2;
    cin >> s;
    while(cur < s){
        i++;
        cur += step;
        step *= 0.98;
    }
    if(i == 0){
        i++;
    }
    cout << i;
    return 0;
}