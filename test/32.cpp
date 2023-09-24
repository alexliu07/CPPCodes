//
// Created by liuyu on 2023/2/26.
//

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

template<typename T>
T read() {
    T x = 0;
    bool f = true;
    char ch;
    while ((ch = getchar()) > '9' || ch < '0')if (ch == '-')f = false;
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}

int main() {
    int a = read<int>();
    ll b = read<ll>();
    cout << a << " " << b;
    return 0;
}
