#include<bits/stdc++.h>
using namespace std;
bool cmp(int n,int m){
    if(n > m){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n,a[10000]={0};
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}