#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,coins,curdate,coindate;
    while(true){
        cin >> k;
        if(k == 0){
            break;
        }
        coins = 0;
        curdate = 0;
        coindate = 1;
        while(curdate <= k){
            //金币刚好发完
            if(k - curdate > coindate){
                coins += coindate * coindate;
            }
            //金币未发完
            else{
                coins += coindate * (k - curdate);
            }
            //累加天数
            curdate += coindate;
            coindate++;
        }
        cout << coins << endl;
    }
    
    return 0;
}