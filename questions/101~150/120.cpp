#include<iostream>
using namespace std;
int main(){
    int n,l,r,tmp,maxx;
    cin >> n >> l >> r;
    if(l/n < r/n){
        cout << n-1;
    }else{
        cout << r % n;
    }
    return 0;
}