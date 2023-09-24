#include <bits/stdc++.h>

#define N 500005
using namespace std;

int main() {
    bool flag;
    int a, b;
    std::vector<std::vector<int> > repeat;
    std::cout << "{";
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            for (int k = 1; k <= 6; k++) {
                a = 0;
                b = 0;
                if (i == 1 || i == 4)a += i;
                else b += i;
                if (j == 1 || j == 4)a += j;
                else b += j;
                if (k == 1 || k == 4)a += k;
                else b += k;
                flag = false;
                for (auto ss: repeat) {
                    if (a == ss[0] && b == ss[1]) {
                        flag = true;
                        break;
                    }
                }
                if (flag)continue;
                std::cout << "{" << a << "," << b << "},";
                repeat.push_back({a, b});
            }
        }
    }
    std::cout << "}";
    return 0;
}