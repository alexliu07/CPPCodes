#include<bits/stdc++.h>

std::map<std::string, int> mp;
int cnt = 0, n, a[10][10];

void cal_solution(int aa, int bb, int cc, int dd, int ee) {
    int x, x1, x2;
    std::string tmp = "";
    for (int i = 1; i <= 9; i++) {
        x = (aa + i) % 10;
        tmp.push_back(x + '0');
        tmp.push_back(bb + '0');
        tmp.push_back(cc + '0');
        tmp.push_back(dd + '0');
        tmp.push_back(ee + '0');
        mp[tmp]++;
        if (mp[tmp] == n)cnt++;
        tmp = "";
    }
    for (int i = 1; i <= 9; i++) {
        x = (bb + i) % 10;
        tmp.push_back(aa + '0');
        tmp.push_back(x + '0');
        tmp.push_back(cc + '0');
        tmp.push_back(dd + '0');
        tmp.push_back(ee + '0');
        mp[tmp]++;
        if (mp[tmp] == n)cnt++;
        tmp = "";
    }
    for (int i = 1; i <= 9; i++) {
        x = (cc + i) % 10;
        tmp.push_back(aa + '0');
        tmp.push_back(bb + '0');
        tmp.push_back(x + '0');
        tmp.push_back(dd + '0');
        tmp.push_back(ee + '0');
        mp[tmp]++;
        if (mp[tmp] == n)cnt++;
        tmp = "";
    }
    for (int i = 1; i <= 9; i++) {
        x = (dd + i) % 10;
        tmp.push_back(aa + '0');
        tmp.push_back(bb + '0');
        tmp.push_back(cc + '0');
        tmp.push_back(x + '0');
        tmp.push_back(ee + '0');
        mp[tmp]++;
        if (mp[tmp] == n)cnt++;
        tmp = "";
    }
    for (int i = 1; i <= 9; i++) {
        x = (ee + i) % 10;
        tmp.push_back(aa + '0');
        tmp.push_back(bb + '0');
        tmp.push_back(cc + '0');
        tmp.push_back(dd + '0');
        tmp.push_back(x + '0');
        mp[tmp]++;
        if (mp[tmp] == n)cnt++;
        tmp = "";
    }

    for (int i = 1; i <= 9; i++) {
        x1 = (aa + i) % 10;
        x2 = (bb + i) % 10;
        tmp.push_back(x1 + '0');
        tmp.push_back(x2 + '0');
        tmp.push_back(cc + '0');
        tmp.push_back(dd + '0');
        tmp.push_back(ee + '0');
        mp[tmp]++;
        if (mp[tmp] == n)cnt++;
        tmp = "";
    }
    for (int i = 1; i <= 9; i++) {
        x1 = (bb + i) % 10;
        x2 = (cc + i) % 10;
        tmp.push_back(aa + '0');
        tmp.push_back(x1 + '0');
        tmp.push_back(x2 + '0');
        tmp.push_back(dd + '0');
        tmp.push_back(ee + '0');
        mp[tmp]++;
        if (mp[tmp] == n)cnt++;
        tmp = "";
    }
    for (int i = 1; i <= 9; i++) {
        x1 = (cc + i) % 10;
        x2 = (dd + i) % 10;
        tmp.push_back(aa + '0');
        tmp.push_back(bb + '0');
        tmp.push_back(x1 + '0');
        tmp.push_back(x2 + '0');
        tmp.push_back(ee + '0');
        mp[tmp]++;
        if (mp[tmp] == n)cnt++;
        tmp = "";
    }
    for (int i = 1; i <= 9; i++) {
        x1 = (dd + i) % 10;
        x2 = (ee + i) % 10;
        tmp.push_back(aa + '0');
        tmp.push_back(bb + '0');
        tmp.push_back(cc + '0');
        tmp.push_back(x1 + '0');
        tmp.push_back(x2 + '0');
        mp[tmp]++;
        if (mp[tmp] == n)cnt++;
        tmp = "";
    }
}

int main() {
    freopen("lock.in", "r", stdin);
    freopen("lock.out", "w", stdout);
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 5; j++) {
            std::cin >> a[i][j];
        }
    }
    if (n == 1) {
        std::cout << 81;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        cal_solution(a[i][1], a[i][2], a[i][3], a[i][4], a[i][5]);
    }
    std::cout << cnt;
    return 0;
}
