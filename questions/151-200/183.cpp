//
// Created by liuyu on 2023/3/5.
//

#include <bits/stdc++.h>

typedef long long ll;


using namespace std;

ll quickPow(ll a, ll b, ll M) {
    ll result = 1;
    while (b) {
        if (b & 1)result = (result * a) % M;
        a = (a * a) % M;
        b >>= 1;
    }
    return result;
}

int main() {
    ll a, b, p, s;
    cin >> a >> b >> p;
    s = quickPow(a, b, p);
    cout << a << "^" << b << " mod " << p << "=" << s;
    return 0;
}
