#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int lastnum = 0,sum=0,tmp=0;
    int status=0;
    char a;
    while(true){
        scanf("%d%c",&tmp,&a);
        //连乘
        if(status == 1){
            lastnum *= tmp;
            lastnum %= 10000;
        }
        if(a == '+'){
            //结束连乘
            if(status == 1){
                sum += lastnum;
                sum %= 10000;
                status = 0;
            }
            //累加
            else{
                sum += tmp;
                sum %= 10000;
            }
        }else if(a == '*'){
            //开始连乘
            if(status == 0){
                lastnum = tmp;
                status = 1;
            }
        }
        if(a == '\n'){
            //最后一个数
            if(status == 0){
                sum += tmp;
                sum %= 10000;
            }else{
                sum += lastnum;
                sum %= 10000;
            }
            break;
        }
    }
    cout << sum % 10000;
    return 0;
}