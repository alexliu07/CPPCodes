#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,numbers[100]={0},count=0,repeatk[100]={0},rtop=0,status;
    cin >> n;
    //输入
    for(int i=0;i<n;i++){
        cin >> numbers[i];
    }
    //判断
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=0;k<n;k++){
                //跳过重复数字
                if(k == j || k == i){
                    continue;
                }
                //判断加法
                if(numbers[i] + numbers[j] == numbers[k]){
                    status = 0;
                    for(int l = 0;l<rtop;l++){
                        if(numbers[k] == repeatk[l]){
                            status = 1;
                            break;
                        }
                    }
                    if(status == 1){
                        continue;
                    }
                    count++;
                    repeatk[rtop] = numbers[k];
                    rtop++;
                }
            }
        }
    }
    cout << count;
    return 0;
}