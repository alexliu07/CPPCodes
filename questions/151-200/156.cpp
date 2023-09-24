//
// Created by liuyu on 2022/11/14.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    bool status = true;
    int n;
    cin >> n;
    for (int i = 1; i <= 200; i++) {
        for (int j = 1; j <= 50; j++) {
            if ((12 * i + 8 * j) == n) {
                cout << i << " " << j << endl;
                status = false;
            }
        }
    }
    if (status) {
        cout << "No";
    }
    return 0;
}
