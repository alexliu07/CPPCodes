#include<bits/stdc++.h>
using namespace std;
//检测是否互质
bool isOnlyCommon(int a,int b){
    int ktop,k[10000]={0};
    if(a!=1&&b!=1){
        ktop = 0;
        //取出a的因数
        for(int i=2;i*i<a;i++){
            if(a % i == 0){
                k[ktop] = i;
                ktop++;
            }
        }
        //检测b的因数
        for(int i=2;i*i<b;i++){
            if(b % i == 0){
                for(int j=0;j<ktop;j++){
                    if(i == k[j]){
                        return false;
                    }
                }
            }
        }
        return true;
    }else{
        return true;
    }
}
int main(){
    double tmp1,tmp2,mini;
    int a,b,l,status,minis=0,minc,mind;
    cin >> a >> b >> l;
    tmp1 = a*1.0 / b;
    //开始循环枚举
    for(int c=1;c<=l;c++){
        for(int d=1;d<=l;d++){
            //检测是否互质
            if(isOnlyCommon(c,d)){
                //检测c/d是否大于等于a/b
                tmp2 = c*1.0 / d;
                if(tmp2 < tmp1){
                    continue;
                }
                //寻找最小
                if(minis == 0){
                    mini = tmp2-tmp1;
                    minc = c;
                    mind = d;
                    minis = 1;
                }else{
                    if((tmp2 - tmp1) < mini){
                        mini = tmp2 - tmp1;
                        minc = c;
                        mind = d;
                    }
                }
            }
        }
    }
    cout << minc << " " << mind;
    return 0;
}