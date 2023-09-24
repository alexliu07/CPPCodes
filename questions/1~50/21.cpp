#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a[100]={0},count[10]={0}, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		tmp = a[i] % 10;
		count[tmp]++;
		tmp = (a[i] / 10) % 10;
		count[tmp]++;
		tmp = (a[i] / 100) % 10;
		count[tmp]++;
	}
	for (int i = 0; i < 10; i++) {
		cout << count[i] << "\n";
	}
	return 0;
}