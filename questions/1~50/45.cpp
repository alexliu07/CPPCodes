#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a[100], x, b[100], top = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (i == x - 1) {
			continue;
		}
		b[top] = a[i];
		top++;
	}
	for (int i = 0; i < n - 1; i++) {
		cout << b[i] << " ";
	}
	return 0;
}