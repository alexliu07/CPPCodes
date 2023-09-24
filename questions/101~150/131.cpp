#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,nums[100000]={0},flag,ntop=0;
    cin >> n;
    //寻找质数
    for(int i=1;i<=n;i++){
        flag = 0;
        for(int j=2;j<i;j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            nums[ntop] = i;
            ntop++;
        }
    }
    //判断是否差2位
    for(int i=1;i<ntop;i++){
        if(nums[i] - nums[i-1] == 2){
            cout << nums[i-1] << " " << nums[i] << endl;
        }
    }
    return 0;
}