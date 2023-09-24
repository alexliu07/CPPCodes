//
// Created by liuyu on 2022/11/14.
//

#include <bits/stdc++.h>

using namespace std;

bool isBack(int n) {
    bool flag = true;
    int a[10] = {0}, atop = 0;
    //拆数
    while (n != 0) {
        a[atop] = n % 10;
        atop++;
        n /= 10;
    }
    //检测回文
    for (int i = 0; i < atop / 2; i++) {
        if (a[i] != a[atop - 1 - i]) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (isBack(i)) {
            count++;
        }
    }
    cout << count;
    return 0;
}
