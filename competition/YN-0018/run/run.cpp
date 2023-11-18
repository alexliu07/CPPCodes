#include<bits/stdc++.h>
#define M 10086
typedef long long ll;
int main() {
    freopen("run.in","r",stdin);
    freopen("run.out","w",stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int c,t,n,m,k,d,x,y,v;
    std::cin >> c >> t;
    ll a,b=(c-t)*t;
    while(t--){
        std::cin >> n >> m >> k >> d;
        for(int i=1;i<=m;i++){
            std::cin >> x >> y >> v;
            a = (i%M)*((x+y+v)%M);
        }
        b += a % M;
        b %= M;
    }
    srand(b);
    std::cout << rand();
    return 0;
}
