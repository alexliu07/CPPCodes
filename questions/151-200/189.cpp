//
// Created by liuyu on 2023/4/2.
//

#include <bits/stdc++.h>

using namespace std;
vector<int> numbers;

int main() {
    ios::sync_with_stdio(false);
    int n, tmp;
    cin >> n;
    while (n--) {
        cin >> tmp;
        numbers.push_back(tmp);
    }
    //排序
    sort(numbers.begin(), numbers.end());
    //去重
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    //输出
    cout << numbers.size() << endl;
    for (auto ss: numbers)cout << ss << " ";
    return 0;
}
