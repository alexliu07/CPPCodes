#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cute[30000]={0},m,count=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> cute[i];
    }
    cin >> m;
    m -= 1;
    //遍历前面的小鱼
    for(int i=m-1;i>=0;i--){
        if(cute[i] < cute[m]){
            count++;
        }
    }
    cout << count;
    return 0;
}