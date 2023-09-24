#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k,a[100000]={0}, tmp;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j] > a[i]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	cout << a[k - 1];
	return 0;
}