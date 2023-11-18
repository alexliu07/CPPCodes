#include <bits/stdc++.h>


int main() {
    std::vector<int> a{0, 1, 2, 3, 4, 5, 6}, b{7, 8, 9};
    a.insert(a.begin() + 4, b.begin(), b.begin() + 1);
    for (int i = 1; i < a.size(); i++)std::cout << a[i] << " ";
    return 0;
}