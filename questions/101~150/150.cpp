#include <bits/stdc++.h>

using namespace std;

int main() {
    double sum = 0;
    int n, l1[3] = {2, 3, 5}, l2[3] = {1, 2, 3}, ltop = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum += l1[ltop] * 1.0 / l2[ltop];
        ltop++;
        if (ltop == 3) {
            //更新斐波那契数列
            l1[0] = l1[1] + l1[2];
            l1[1] = l1[2] + l1[0];
            l1[2] = l1[0] + l1[1];
            l2[0] = l2[1] + l2[2];
            l2[1] = l2[2] + l2[0];
            l2[2] = l2[0] + l2[1];
            ltop = 0;
        }
    }
    printf("%.6f", sum);
    return 0;
}
