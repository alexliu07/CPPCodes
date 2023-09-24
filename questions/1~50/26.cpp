#include <bits/stdc++.h>

using namespace std;

long long fact(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int k;
    long long sum = 0;
    cin >> k;
    for (int i = 1; i <= k; i++) {
        sum += fact(i);
    }
    cout << sum;
    return 0;
}