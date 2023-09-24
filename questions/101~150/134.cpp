#include<bits/stdc++.h>
using namespace std;
int dis[100000];
int main(){
    int n;
    long long count=0;
    cin >> n;
    for(int i=0;i<n;i++){
        dis[i] = 0;
        cin >> dis[i];
    }
    for(int i=1;i<n;i++){
        if(dis[i] > dis[i-1]){
            count += dis[i];
        }else{
            count += dis[i-1];
        }
    }
    cout << count;
    return 0;
}