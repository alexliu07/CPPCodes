#include <bits/stdc++.h>

using namespace std;

double count(int m, int a, int b) {
    double sum;
    if (m == 1) {
        sum = a + b;
    } else if (m == 2) {
        sum = (a * b) * 1.0 / (a + b);
    }
    return sum;
}

//参数说明
//in:第一行3个数字：m,n,t，m代表串联或并联（1代表串联，2代表并联），n代表电阻个数，0<n<=1000，t代表目标电阻
//in:第二行n个数字，代表每个电阻的阻值
//out:第i行2个数字，代表选择的电阻
int main() {
    int m, n, t, blocks[1000] = {0};
    cin >> m >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (count(m, blocks[i], blocks[j]) == t) {
                cout << blocks[i] << " " << blocks[j] << endl;
            }
        }
    }
    cout << "end";
    return 0;
}
