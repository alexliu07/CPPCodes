#include<iostream>
using namespace std;
int main(){
    freopen("ball.in","r",stdin);
    freopen("ball.out","w",stdout);
    int n,square[100][100],maxscore,status=0,tmpscore=0;
    cin >> n;
    //初始化读入
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            square[i][j] = 0;
            cin >> square[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tmpscore = 0;
            if(square[i][j] != 0){
                continue;
            }
            //当前横行
            for(int l=0;l<n;l++){
                if(l == j){
                    continue;
                }
                tmpscore += square[i][l];
            }
            //当前列
            for(int l=0;l<n;l++){
                if(l == i){
                    continue;
                }
                tmpscore += square[l][j];
            }
            //记录最大值
            if(status == 0){
                maxscore = tmpscore;
                status = 1;
            }else{
                if(tmpscore > maxscore){
                    maxscore = tmpscore;
                }
            }
        }
    }
    if(status == 0){
        cout << "Bad Game";
    }else{
        cout << maxscore;
    }
    return 0;
}