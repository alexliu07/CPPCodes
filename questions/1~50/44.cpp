#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a[100] = { 0 }, x, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> x;
	tmp = a[n - 1];
	for (int i = n - 1; i >= x; i--) {
		a[i] = a[i - 1];
	}
	a[x - 1] = tmp;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}