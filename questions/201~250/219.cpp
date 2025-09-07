//
// Created by Alex Liu on 2023/8/18.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int matches[47][2] = {{3,  0},
                          {2,  2},
                          {2,  3},
                          {6,  0},
                          {2,  5},
                          {2,  6},
                          {1,  4},
                          {1,  5},
                          {5,  2},
                          {1,  7},
                          {1,  8},
                          {1,  6},
                          {5,  3},
                          {1,  9},
                          {9,  0},
                          {5,  5},
                          {5,  6},
                          {1,  10},
                          {1,  11},
                          {1,  12},
                          {0,  6},
                          {0,  7},
                          {4,  4},
                          {0,  9},
                          {0,  10},
                          {0,  8},
                          {4,  5},
                          {0,  11},
                          {8,  2},
                          {4,  7},
                          {4,  8},
                          {0,  12},
                          {0,  13},
                          {0,  14},
                          {4,  6},
                          {8,  3},
                          {4,  9},
                          {0,  15},
                          {12, 0},
                          {8,  5},
                          {8,  6},
                          {4,  10},
                          {4,  11},
                          {4,  12},
                          {0,  16},
                          {0,  17},
                          {0,  18}};
    int a, b;
    bool flag = false;
    std::cin >> a >> b;
    for (int i = 0; i < 47; i++) {
        if (a == matches[i][0] && b == matches[i][1]) {
            flag = true;
            break;
        }
    }
    std::cout << (flag ? "Yes" : "No");
    return 0;
}
