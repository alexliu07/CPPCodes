//
// Created by liuyu on 2022/11/20.
//

#include <bits/stdc++.h>

using namespace std;
int a[1000000] = {0};

int findnum(int left, int right, int x) {
    int midnum;
    if (left > right) {
        return -1;
    }
    midnum = (left + right) / 2;
    if (x == a[midnum]) {
        return midnum;
    } else if (x < a[midnum]) {
        return findnum(left, midnum - 1, x);
    } else if (x > a[midnum]) {
        return findnum(midnum + 1, right, x);
    }
}

int main() {
    int n, x, sum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    sum = findnum(0, n - 1, x);
    if (sum == -1) {
        cout << -1;
    } else {
        cout << sum + 1;
    }
    return 0;
}
