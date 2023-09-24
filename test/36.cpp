//
// Created by liuyu on 2023/4/2.
//

#include <bits/stdc++.h>

using namespace std;
set<int> s;

int main() {
    //插入元素
    s.insert(5);
    //删除元素(值/指针)
    //s.erase(5);
    //查找元素，返回迭代器
    cout << *s.find(5);
    //遍历
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (auto val: s) {
        cout << val << " ";
    }
    return 0;
}
