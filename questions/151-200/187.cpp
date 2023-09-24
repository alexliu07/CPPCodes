//
// Created by liuyu on 2023/4/2.
//

#include <bits/stdc++.h>

#define _for(i, a, b) for(int i=(a);i<=(b);i++)

using namespace std;
int n, tmp;
set<int> fruit[2];

int main() {
    //读入
    ios::sync_with_stdio(false);
    cin >> n;
    _for(i, 1, n) {
        cin >> tmp;
        fruit[tmp].insert(i);
    }
    while (true) {
        //如果有集合空了就把剩下的全部输出并退出循环
        if (fruit[1].empty()) {
            for (auto ss: fruit[0])cout << ss << endl;
            break;
        }
        if (fruit[0].empty()) {
            for (auto ss: fruit[1])cout << ss << endl;
            break;
        }
        int current, last = 0;
        //寻找先输出的集合
        if (*fruit[0].begin() < *fruit[1].begin())current = 0;
        else current = 1;
        while (true) {
            //查找另一个集合中比上一个数字大的数
            auto it = fruit[current].lower_bound(last);
            //如果无法找到就退出循环
            if (it == fruit[current].end())break;
            //输出结果
            cout << *it << " ";
            //更新上一个数字
            last = *it;
            //删除当前数字
            fruit[current].erase(it);
            //切换集合
            current ^= 1;
        }
        cout << endl;
    }
    return 0;
}