#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,max=0;
	cin >> n;
	string a,b;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a.length() > max) {
			max = a.length();
			b = a;
		}
	}
	cout << b;
	return 0;
}