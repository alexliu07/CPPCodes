//
// Created by liuyu on 2023/3/5.
//

#include <bits/stdc++.h>

#define M 1000000007
typedef long long ll;

using namespace std;

//快速幂
ll quickPow(ll a, ll b) {
    ll result = 1;
    while (b) {
        //位运算
        //b&1=>b%2
        //b>>=1=>b/=2
        if (b & 1)result = (result * a) % M;
        a = (a * a) % M;
        b >>= 1;
    }
    return result;
}

//龟速乘
ll slowMulti(ll a, ll b) {
    ll result = 0;
    while (b) {
        if (b & 1)result = (result + a) % M;
        a = (a + a) % M;
        b >>= 1;
    }
    return result;
}


int main() {
    ll a, b, r, p;
    cin >> a >> b;
    r = quickPow(a, b) % M;
    p = slowMulti(a, b) % M;
    cout << r << endl << p;
    return 0;
}