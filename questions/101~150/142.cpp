#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a[3]={0};
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    cout << a[0] << " " << a[1] << " " << a[2];
    return 0;
}