#include<bits/stdc++.h>
#define N 100005
typedef long long ll;

struct var {
    int id, type, value;
    char v;
} vars[N];
int main() {
    freopen("tribool.in", "r", stdin);
    freopen("tribool.out", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int c, t, n, m, x, y, cnt;
    char op;
    std::cin >> c >> t;
    while(t--) {
        cnt = 0;
        std::cin >> n >> m;
        if(c == 3 || c == 4) {
            std::vector<char> vals(n + 1, 'a');
            for(int i = 1; i <= m; i++) {
                std::cin >> op >> x;
                vals[x] = op;
            }
            for(auto ss : vals)if(ss == 'U')cnt++;
            std::cout << cnt;
        } else{
            for(int i = 1; i <= m; i++) {
                std::cin >> op >> x;
                vars[x].id = i;
                if(op == '+') {
                    std::cin >> y;
                    vars[x].type = 1;
                    vars[x].value = y;
                } else if(op == '-'){
                    std::cin >> y;
                    vars[x].type = 2;
                    vars[x].value = y;
                } else{
                    vars[x].type = -1;
                    vars[x].v = op;
                }
            }
            for(int i=1;i<=n;i++){
                std::cout << vars[i].id << " " << vars[i].type << " " << vars[i].value << " " << vars[i].v << "\n";
            }
            for(int i = 1; i <= n; i++) {
                if(vars[i].type == -1){
                    if(vars[i].v == 'U')cnt++;
                    continue;
                }
                int j = vars[i].value;
                while(vars[j].type != -1 && vars[j].type != 0 && (vars[j].id < vars[i].id)) {
                    j = vars[j].value;
                    std::cout <<j;
                }
                if(vars[j].type == -1 && vars[j].v == 'U')cnt++;
            }
            std::cout << cnt;
        }
        std::cout << "\n";
    }
    return 0;
}
