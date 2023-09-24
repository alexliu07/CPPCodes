//
// Created by liuyu on 2023/3/5.
//

#include <bits/stdc++.h>

using namespace std;

struct heap {
    int id, v;

    bool operator<(const heap &rhs) const {
        //小根堆
        return rhs.v < v;
        //大根堆
        //return rhs.v > v;
    }
};

priority_queue<heap> q;

int main() {
    int id, v, a, b;
    cin >> id >> v;
    //输入
    q.push((heap) {id, v});
    //弹出
    a = q.top().id;
    b = q.top().v;
    cout << a << " " << b;
    return 0;
}
