#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,n,p[30000]={0},i=0,j,count=0;
    cin >> w >> n;
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    j = n-1;
    //排序
    sort(p,p+n);
    while(i<=j){
        if(p[i] + p[j] <= w){
            i++;
        }
        count++;
        j--;
    }
    cout << count;
    return 0;
}