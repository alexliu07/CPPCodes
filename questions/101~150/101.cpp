#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string title;
    getline(cin,title);
    for(int i=0;i<title.length();i++){
        if(title[i] != ' ' && title[i] != '\n'){
            count++;
        }
    }
    cout << count;
    return 0;
}