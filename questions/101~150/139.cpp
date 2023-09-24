#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[4]={0};
    cin >> n;
    for(int i=3;i>=0;i--){
        a[i] = n % 10;
        n /= 10;
    }
    if(a[0] + a[2] == a[1] + a[3]){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}