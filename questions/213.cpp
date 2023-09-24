//
// Created by Alex Liu on 2023/7/22.
//

#include <bits/stdc++.h>

#define N 100005
#define INF 0x7fffffff
typedef long long ll;

int n, m, last, tmp;

struct Numlist {
    int id;
    std::vector<ll> nums;

    bool operator<(const Numlist &rhs) const {
        for (int i = 0; i < m + 1; i++) {
            if (nums[i] != rhs.nums[i])return nums[i] < rhs.nums[i];
        }
    }
};

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    std::cin >> n >> m;
    std::vector<Numlist> numlist(n);
    std::map<int, int> matches;
    bool isSame = true, isBegin = true, isDifferent = true;;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        numlist[i].nums.push_back(tmp);
        numlist[i].id = i + 1;
        matches[tmp]++;
        if (matches[tmp] != 1)isDifferent = false;
        if (isBegin) {
            last = tmp;
            isBegin = false;
        } else if (tmp != last)isSame = false;
    }
    if (isSame) {
        if (last > 0)for (int i = 1; i <= n; i++)std::cout << i << " ";
        else for (int i = n; i >= 1; i--)std::cout << i << " ";
    } else if (n == 1)std::cout << 1;
    else if (isDifferent) {
        std::sort(numlist.begin(), numlist.end());
        for (int i = 0; i < n; i++)std::cout << numlist[i].id << " ";
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < m + 1; j++) {
                numlist[i].nums.push_back(numlist[i].nums[j - 1] * (i + 1));
            }
        }
        std::sort(numlist.begin(), numlist.end());
        for (int i = 0; i < n; i++)std::cout << numlist[i].id << " ";
    }
    return 0;
}
