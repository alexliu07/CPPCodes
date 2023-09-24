//
// Created by liuyu on 2023/4/2.
//

#include <bits/stdc++.h>

using namespace std;
set<int> numbers;

int main() {
    int n, tmp;
    ios::sync_with_stdio(false);
    cin >> n;
    while (n--) {
        cin >> tmp;
        numbers.insert(tmp);
    }
    cout << numbers.size() << endl;
    for (auto ss: numbers)cout << ss << " ";
    return 0;
}
