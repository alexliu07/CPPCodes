#include<iostream>
using namespace std;
int testNum[100000][10];
int main(){
    freopen("lucky.in","r",stdin);
    freopen("lucky.out","w",stdout);
    int n,greatNum[10],count[10],match;
    cin >> n;
    //初始化读入中奖号码
    for(int i=0;i<7;i++){
        greatNum[i] = 0;
        cin >> greatNum[i];
    }
    //初始化读入拥有号码
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            testNum[i][j] = 0;
            cin >> testNum[i][j];
        }
    }
    //初始化获奖张数
    for(int i=0;i<7;i++){
        count[i] = 0;
    }
    //遍历张数
    for(int i=0;i<n;i++){
        match = 0;
        //遍历位数
        for(int j=0;j<7;j++){
            //遍历中奖位数
            for(int l=0;l<7;l++){
                if(testNum[i][j] == greatNum[l]){
                    match++;
                    break;
                }
            }
        }
        if(match != 0){
            count[7-match]++;
        }
    }
    for(int i=0;i<7;i++){
        cout << count[i] << " ";
    }
    return 0;
}