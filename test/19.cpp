#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,nums[100000]={0},ntop=0;
    cin >> n;
    //正数
    for(int i=1;i*i<=abs(n);i++){
        if(n % i == 0){
            nums[ntop] = i;
            ntop++;
            nums[ntop] = n / i;
            ntop++;
        }
    }
    //负数
    for(int i=-1;i*i<=abs(n);i--){
        if(n % i == 0){
            nums[ntop] = i;
            ntop++;
            nums[ntop] = n / i;
            ntop++;
        }
    }
    if(ntop > 0){
        cout << n << " = ";
        for(int i=0;i<ntop;i=i+2){
            cout << nums[i] << "*" << nums[i+1] << " , ";
        }
    }else{
        cout << "-1";
    }
    return 0;
}