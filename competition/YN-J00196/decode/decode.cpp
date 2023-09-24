#include <bits/stdc++.h>

using namespace std;

int main() {
//	freopen("decode.in", "r", stdin);
//	freopen("decode.out", "w", stdout);
    bool flag;
    int k;
    long long n, d, e, q, exd;
    cin >> k;
    for (int i = 0; i < k; i++) {
        flag = true;
        cin >> n >> d >> e;
        exd = e * d;
        //分解因数
        for (long long p = 1; p * p <= n; p++) {
            if (n % p == 0) {
                //找到因数
                q = n / p;
                //验证
                if (exd == ((p - 1) * (q - 1) + 1)) {
                    flag = false;
                    cout << p << " " << q;
                    break;
                }
            }
        }
        if (flag) {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}