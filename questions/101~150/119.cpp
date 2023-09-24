#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,power[100]={0},ptop=0,i=1,status = 0;
    cin >> n;
    //判断奇偶性
    if(n % 2 != 0){
        cout << "-1";
        return 0;
    }
    n /= 2;
    while(n != 0){
        if(n % 2 == 1){
            power[ptop] = pow(2,i);
            ptop++;
        }
        i++;
        n /= 2;
    }
    for(int i=ptop-1;i>=0;i--){
        cout << power[i] << " ";
    }
    
    return 0;
}