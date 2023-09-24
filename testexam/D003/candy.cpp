#include<iostream>
using namespace std;
int main(){
    freopen("candy.in","r",stdin);
    freopen("candy.out","w",stdout);
    int n,l,r,tmp,maxx;
    cin >> n >> l >> r;
    for(int i=l;i<=r;i++){
        //发糖果
        tmp = i % n;
        //剩下糖果为奖励
        if(i == l){
            maxx = tmp;
        }else{
            if(tmp > maxx){
                maxx = tmp;
            }
        }
    }
    cout << maxx;
    return 0;
}