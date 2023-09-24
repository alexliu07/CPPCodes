#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,p[5000],a[5000],money=0,already=0,j=0,tmp;
    cin >> n >> m;
    //初始化读入单价产奶量
    for(int i=0;i<m;i++){
        p[i] = 0;
        a[i] = 0;
        cin >> p[i] >> a[i];
    }
    //单价排序
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(p[i] < p[j]){
                swap(p[i],p[j]);
                swap(a[i],a[j]);
            }
        }
    }
    //贪心找最小花费
    while(already < n){
        //如果加上之后还没超出
        if(already + a[j] <= n){
            already += a[j];
            money += a[j] * p[j];
        }
        //超出
        else{
            tmp = n-already;
            already += tmp;
            money += p[j] * tmp;
        }
        j++;
    }
    cout << money;
    return 0;
}