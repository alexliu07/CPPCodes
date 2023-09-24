//
// Created by liuyu on 2022/12/11.
//

#include <bits/stdc++.h>

using namespace std;

double func(double n) {
    double sum = 0;
    for (int i = 2; i <= n + 1; i++) {
        sum += (1.0 / i);
    }
    return sum;
}

int main() {
    double c;
    int i;
    while (true) {
        i = 1;
        cin >> c;
        if (c == 0.0) {
            break;
        }
        while (true) {
            if (func(i) >= c) {
                break;
            } else {
                i++;
            }
        }
        cout << i << endl;
    }
    return 0;
}
