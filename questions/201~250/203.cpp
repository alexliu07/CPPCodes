//
// Created by Alex Liu on 2023/7/16.
//
#include<bits/stdc++.h>
typedef long long ll;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,m,k;
    std::cin >> n >> m >> k;
    std::vector<std::vector<int> > G(n+1),G2(n+1);
    std::vector<ll> val(n+1);
    //点权
    ll mx=0;
    for(int i=2;i<=n;i++){
        std::cin >> val[i];
        mx = std::max(mx,val[i]);
    }
    //存图
    for(int i=1;i<=m;i++){
        int x,y;
        std::cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    //bfs记录距离
    std::vector<std::vector<int> > dis(n+1,std::vector<int>(n+1,0));
    std::function<void(int)> bfs=[&](int s){
        std::queue<int> q;
        q.push(s);
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto v:G[u]){
                if(!dis[s][v]){
                    dis[s][v] = dis[s][u]+1;
                    q.push(v);
                }
            }
        }
    };
    for(int i=1;i<=n;i++)bfs(i);
    //绘制新图
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j&&dis[i][j]>0&&dis[i][j]<=k+1){
                G2[i].push_back(j);
            }
        }
    }
    //dfs查找目标
    std::vector<int> vis(n+1,0);
    ll ans=0;
    std::function<void(int,int,ll)> dfs=[&](int u,int now,ll sum){
        if(sum + (4-now)*mx<=ans)return;
        if(now == 3){
            for(auto v:G2[u]){
                if(!vis[v]&&dis[v][1]>0&&dis[v][1]<=k+1){
                    ans = std::max(ans,sum+val[v]);
                }
            }
            return;
        }
        for(auto v:G2[u]){
            if(!vis[v]){
                vis[v] = 1;
                dfs(v,now+1,sum+val[v]);
                vis[v] = 0;
            }
        }
    };
    dfs(1,0,0);
    std::cout << ans;
    return 0;
}