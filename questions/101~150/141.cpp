#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    if(a == b){
        cout << "tie";
    }else if((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1)){
        cout << "win";
    }else{
        cout << "lose";
    }
    return 0;
}