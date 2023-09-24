#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,y,a,b;
    cin >> n >> x >> y >> a >> b;
    //判断是否超出总数
    if(a > x || b > y){
        cout << "NO";
    }else{
        //判断是否能购买
        if(a * 3 + b * 4 <= n){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }
    return 0;
}