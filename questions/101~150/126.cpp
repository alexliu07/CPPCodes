#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,score[1000][3]={0},count=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> score[i][0] >> score[i][1] >> score[i][2];
    }
    //遍历第一个同学
    for(int i=0;i<n;i++){
        //遍历第二个同学
        for(int j=i+1;j<n;j++){
            if((abs(score[i][0] - score[j][0]) <= 5) && (abs(score[i][1] - score[j][1]) <= 5) && (abs(score[i][2] - score[j][2]) <= 5) && (abs((score[i][0] + score[i][1] + score[i][2]) - (score[j][0] + score[j][1] + score[j][2])) <= 10)){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}