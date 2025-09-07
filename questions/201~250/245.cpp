//
// Created by Alex Liu on 2023/12/17.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    ll xl, xu, yl, yu;
    std::cin >> xl >> xu >> yl >> yu;
    std::cout << ((xl * xu >= -INF - 1 && xl * xu <= INF && xl * yu >= -INF - 1 && xl * yu <= INF &&
                   yl * xu >= -INF - 1 && yl * xu <= INF && yl * yu >= -INF - 1 && yl * yu <= INF) ? "int"
                                                                                                   : "long long int");
    return 0;
}
