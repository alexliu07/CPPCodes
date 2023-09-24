//
// Created by liuyu on 2023/4/9.
//

#include <bits/stdc++.h>

#define _for(i, a, b) for(int i=(a);i<=(b);i++)

using namespace std;

map<string, int> mp;

int main() {
    int n;
    string tmp;
    cin >> n;
    _for(i, 1, 2 * n - 1) {
        cin >> tmp;
        mp[tmp]++;
    }
    for (auto mm: mp) {
        if (mm.second % 2 != 0) {
            cout << mm.first;
            break;
        }
    }
    return 0;
}
