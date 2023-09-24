//
// Created by liuyu on 2022/11/12.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << "*";
        }
        cout << endl;
        l++;
    }
    return 0;
}
