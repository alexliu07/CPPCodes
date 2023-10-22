//
// Created by liuyu on 2023/4/30.
//

#include <bits/stdc++.h>

using namespace std;
int n;

void dfs(int now) {
    //if(出口条件){
    //计算
    //return;
    //}
    for (int i = 1; i <= n; i++) {
        //判断是否有标记
        //if(无标记){
        //标记
        dfs(now + 1);
        //标记撤销
        //}
    }
}

void bfs(int s) {
    std::queue<int> q;
    q.push(s);
    //标记
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            //判断标记
//            if(){
//                bfs(s+1);
//            }
        }
    }
}


int main() {

    return 0;
}
