//
// Created by liuyu on 2022/11/18.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, n, sum = 0, curnum;
    cin >> a >> n;
    for (int i = 0; i < n; i++) {
        curnum = a;
        for (int j = 0; j < i; j++) {
            curnum = curnum * 10 + a;
        }
        sum += curnum;
    }
    cout << sum;
    return 0;
}
