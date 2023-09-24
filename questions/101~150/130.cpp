#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,code[100]={0},tmp = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> tmp;
        code[tmp-1] = 1;
    }
    for(int i=0;i<100;i++){
        if(code[i] == 1){
            cout << i+1 << " ";
        }
    }
    return 0;
}