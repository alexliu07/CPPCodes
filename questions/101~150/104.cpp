#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,room[10000][100][2]={0},x,count=0,tmp,nextn,j,roomnum[10000]={0};
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> room[i][j][0] >> room[i][j][1];
            if(room[i][j][0] == 1){
                roomnum[i]++;
            }
        }
    }
    cin >> x;
    tmp = x;
    for(int i=0;i<n;i++){
        nextn = room[i][tmp][1] % roomnum[i];
        if(nextn == 0){
            nextn = roomnum[i];
        }
        count += room[i][tmp][1];
        if(room[i][tmp][0] == 1){
            nextn--;
        } 
        j = tmp + 1;
        while(nextn > 0){
            if(j == m){
                j = 0;
            }
            if(room[i][j][0] == 1){
                nextn--;
            }
            j++;
        }
        tmp = j - 1;
        if(tmp == m){
            tmp = 0;
        }
    }
    cout << count % 20123;
    return 0;
}