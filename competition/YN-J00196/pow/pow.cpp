#include <bits/stdc++.h>

using namespace std;

int main() {
//	freopen("pow.in", "r", stdin);
//	freopen("pow.out", "w", stdout);
    bool flag = true;
    long long a, b, c = 1;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        c *= a;
        if (c > 1000000000) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << c;
    } else {
        cout << "-1";
    }
    return 0;
}