#include<bits/stdc++.h>
using namespace std;
int main(){
    bool issign,isother;
    int n,count=0;
    string a;
    cin >> n;
    getline(cin,a);
    for(int i=0;i<n;i++){
        issign = false;
        isother = false;
        getline(cin,a);
        a = a + ' ';
        for(int j=0;j<a.length();j++){
            if(a[j] == '#' && a[j+1] == ' ' && issign == false){
                issign = true;
            }
            else if(a[j] != ' '){
                isother = true;
            }
            if(isother){
                break;
            }
        }
        if(isother && issign){
            count++;
        }
    }
    cout << count;
    return 0;
}