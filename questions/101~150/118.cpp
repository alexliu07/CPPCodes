#include<bits/stdc++.h>

using namespace std;

long long convert2Ten(string num, int hex) {
    long long result = 0;
    int j = 0;
    for (int i = num.length() - 1; i >= 0; i--) {
        if (num[i] >= '0' && num[i] <= '9') {
            result += pow(hex, j) * (num[i] - '0');
        } else {
            result += pow(hex, j) * (num[i] + 10 - 'A');
        }

        j++;
    }
    return result;
}

int main() {
    string x;
    int n;
    cin >> n >> x;
    cout << convert2Ten(x, n);
    return 0;
}