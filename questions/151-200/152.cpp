//
// Created by liuyu on 2022/11/12.
//

#include <bits/stdc++.h>

using namespace std;

bool isLeap(int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isLeap(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}
