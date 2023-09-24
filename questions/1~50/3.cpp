#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10000],b[10000],c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < n; i++) {
		c = a[i] + b[i];
		cout << c << "\n";
	}
	return 0;
}