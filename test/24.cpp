#include <bits/stdc++.h>

using namespace std;

//参数说明
//in:第一行2个数字：m,n，m代表串联或并联（1代表串联，2代表并联），n代表电阻个数，0<n<=1000
//in:第二行n个数字，代表每个电阻的阻值
//out:第一行1个数字，代表电路中总的阻值
int main() {
    double sum = 0;
    int m, n, blocks[1000] = {0};
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
    }
    if (m == 1) {
        for (int i = 0; i < n; i++) {
            sum += blocks[i];
        }
    } else if (m == 2) {
        for (int i = 0; i < n; i++) {
            sum += 1.0 / blocks[i];
        }
        sum = 1.0 / sum;
    }
    cout << sum;
    return 0;
}
