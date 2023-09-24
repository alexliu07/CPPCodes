//
// Created by liuyu on 2022/12/11.
//

#include <bits/stdc++.h>

using namespace std;

int countFac(int number, int fac) {
    int count = 0;
    while (number % fac == 0) {
        count++;
        number /= fac;
    }
    return count;
}

int main() {
    int n, tmp, twoC = 0, fiveC = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        twoC += countFac(tmp, 2);
        fiveC += countFac(tmp, 5);
    }
    cout << min(twoC, fiveC);
    return 0;
}
