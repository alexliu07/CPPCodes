#include<bits/stdc++.h>
using namespace std;
int main(){
    int tmp,m,n,k,peanuts[400]={0},ptop=0,positions[400][2]={0},count=0,curtime=0,nexttime,back;
    cin >> m >> n >> k;
    //读入
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> tmp;
            if(tmp != 0){
                peanuts[ptop] = tmp;
                positions[ptop][0] = i;
                positions[ptop][1] = j;
                ptop++;
            }
        }
    }
    //排序
    for(int i=0;i<ptop;i++){
        for(int j=0;j<ptop;j++){
            if(peanuts[i] > peanuts[j]){
                swap(peanuts[i],peanuts[j]);
                swap(positions[i],positions[j]);
            }
        }
    }
    //计算并累加时间
    for(int i=0;i<ptop;i++){
        if(i == 0){
            nexttime = positions[i][0]+2;
            if(nexttime > k || nexttime*2 - 1 > k){
                break;
            }
            curtime += nexttime;
            count += peanuts[i];
        }else{
            nexttime = abs(positions[i][0] - positions[i-1][0]) + abs(positions[i][1] - positions[i-1][1]) + 1;
            back = positions[i][0]+1;
            if(curtime + nexttime > k || curtime + nexttime + back > k){
                break;
            }
            curtime += nexttime;
            count += peanuts[i];
        }
    }
    cout << count;
    return 0;
}