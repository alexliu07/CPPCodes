#include<bits/stdc++.h>

using namespace std;

int main() {
    //ax² + bx + c
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;
    //判断是否有解
    d = b * b * 1.0 - 4 * a * c * 1.0;
    if (d < 0) {
        cout << "-1";
    } else {
        x1 = (-b + sqrt(d)) * 1.0 / (2 * a);
        x2 = (-b - sqrt(d)) * 1.0 / (2 * a);
        cout << "x1 = " << x1 << " ,x2 = " << x2;
    }
    return 0;
}