//
// Created by liuyu on 2023/4/9.
//

#include <bits/stdc++.h>

#define _for(i, a, b) for(int i=(a);i<=(b);i++)

using namespace std;

map<string, int> mp;
string name;

int main() {
    //计算重复次数
    int n = 3;
    for (int i = 1; i <= n; i++) {
        cin >> name;
        //访问
        mp[name]++;
    }
    //遍历取出
    //法一
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    //法二
    for (auto mm: mp) {
        cout << mm.first << " " << mm.second << endl;
    }
    return 0;
}
