#include <bits/stdc++.h>

using namespace std;

long long fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) % 9997;
    return 0;
}