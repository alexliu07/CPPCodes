#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0,tmp;
    cin >> n;
    tmp = n;
    while(n != 0){
        s += pow((n % 10),3);
        n /= 10;
    }
    if(s == tmp){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}