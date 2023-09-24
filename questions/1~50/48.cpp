#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, c[10000] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	sort(c, c + n);
	cout << c[n / 2];
	return 0;
}