//
// Created by Alex Liu on 2024/1/23.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(int a, int b) {
    return (a * 1l * b) / gcd(a, b);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t, n, k;
    int power_2[30] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144,
                       524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456,
                       536870912, 1073741824};
    std::cin >> t;
    while (t--) {
        std::cin >> n >> k;
        int tmpnum = n - k + 3;
        if (tmpnum % 2 == 0) {
            int i = 0;
            for (int j = 0; j < 30; j++) {
                if (power_2[j] > n / 2) {
                    i = power_2[j - 1];
                    break;
                }
            }
            while (i >= 2) {
                if (lcm(i, (tmpnum - i) / 2) <= n / 2) {
                    std::cout << i << " ";
                    tmpnum = (tmpnum - i) / 2;
                    break;
                } else i /= 2;
            }
        } else {
            std::cout << "1 ";
            tmpnum = (tmpnum - 1) / 2;
        }
        std::cout << tmpnum << " " << tmpnum << " ";
        for (int i = 1; i <= k - 3; i++)std::cout << "1 ";
        std::cout << "\n";
    }

    return 0;
}
