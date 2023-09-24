#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, tmp, count = 0;
	string a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp != 0) {
			a.append(a.length(), (tmp % 10 + '0'));
			tmp = tmp / 10;
		}
	}
	cout << a << endl;
	cout << count % 20123;
	return 0;
}