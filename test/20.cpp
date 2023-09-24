#include<bits/stdc++.h>

using namespace std;

int main() {
    int b, c, nums[100000] = {0}, ntop = 0;
    cin >> b >> c;
    //判断正数
    for (int i = 1; i * i <= abs(c); i++) {
        if (c % i == 0) {
            if (i + (c / i) == b) {
                nums[ntop] = i;
                ntop++;
                nums[ntop] = c / i;
                ntop++;
            }
        }
    }
    //判断负数
    for (int i = -1; i * i <= abs(c); i--) {
        if (c % i == 0) {
            if (i + (c / i) == b) {
                nums[ntop] = i;
                ntop++;
                nums[ntop] = c / i;
                ntop++;
            }
        }
    }
    if (ntop != 0) {
        for (int i = 0; i < ntop; i = i + 2) {
            cout << nums[i] << " " << nums[i + 1] << endl;
            cout << "x1 = " << -nums[i] << " , x2 = " << -nums[i + 1] << " ";
        }
    } else {
        cout << "-1";
    }
    return 0;
}