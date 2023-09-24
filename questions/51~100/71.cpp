#include<bits/stdc++.h>
using namespace std;
int main(){
    int daysInfo[7][2]={0},classTime,maxTime=0,maxDay=0;
    //读入
    for(int i=0;i<7;i++){
        cin >> daysInfo[i][0] >> daysInfo[i][1];
    }
    //遍历
    for(int i=0;i<7;i++){
        classTime = daysInfo[i][0] + daysInfo[i][1];
        //若不高兴
        if(classTime > 8){
            if(classTime > maxTime){
                maxTime = classTime;
                maxDay = i+1;
            }
        }
    }
    cout << maxDay;
    return 0;
}