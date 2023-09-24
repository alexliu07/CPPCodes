#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n % 3 == 0 && n % 7 == 0){
        cout << n / 7;
    }else{
        cout << "-1";
    }
    return 0;
}