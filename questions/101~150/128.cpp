#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,tmp;
    cin >> n;
    //遍历第一个数
    for(int i=2;i<=n;i++){
        a=0;
        //获取a的因数和
        for(int k=2;k*k<=i;k++){
            if(k*k==i){
                a += k;
            }
            else if(i % k == 0){
                a += k;
                a += i / k;
            }
        }
        //遍历第二个数
        for(int j=2;j<=n;j++){
            b=0;
            //相等就跳过
            if(i == j){
                continue;
            }
            //获取b的因数和
            for(int k=2;k*k<=j;k++){
                if(k*k==j){
                    b += k;
                }
                else if(j % k == 0){
                    b += k;
                    b += j / k;
                }
            }
            //判断因数和是否相等
            if(a == j && b == i){
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}