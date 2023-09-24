#include<bits/stdc++.h>
using namespace std;
//字符串移位
string move(string a){
    a = a + a[0];
    a.erase(0,1);
    return a;
}
int main(){
    int flag=0;
    string a,b;
    cin >> a >> b;
    for(int i=0;i<=a.length();i++){
        if(a.find(b) != string::npos){
            flag = 1;
            cout << i;
            break;
        }
        a = move(a);
    }
    if(flag == 0){
        cout << "-1";
    }
    return 0;
}