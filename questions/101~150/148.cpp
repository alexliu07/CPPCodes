//
// Created by liuyu on 2022/11/6.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long k, n, d, e, A, B, C, p, q;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> n >> d >> e;
        A = n;
        B = n - e * d + 2;
        C = sqrt(B * B - 4 * A);
        if (((B * B - 4 * A) >= 0) && (C * C == (B * B - 4 * A)) && ((B + C) % 2 == 0)) {
            q = (B + C) / 2;
            p = B - q;
            cout << p << " " << q;
        } else {
            cout << "NO";
        }
        cout << endl;
    }
}