#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100000]={0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	return 0;
}