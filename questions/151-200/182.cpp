//
// Created by liuyu on 2023/3/5.
//

#include <bits/stdc++.h>

#define _for(i, a, b) for(int i=(a);i<=b;i++)
typedef long long ll;

using namespace std;

priority_queue<int, vector<int>, greater<int> > q;

int main() {
    int n, tmp, a, b;
    ll ans = 0;
    //读入
    cin >> n;
    _for(i, 1, n) {
        cin >> tmp;
        q.push(tmp);
    }
    //取值
    _for(i, 1, n - 1) {
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        //加入优先队列
        ans += (a + b);
        q.push(a + b);
    }
    cout << ans;
    return 0;
}
