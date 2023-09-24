#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,status=0;
	cin >> n;
	if (n < 0) {
		cout << "-";
	}
	n = abs(n);
	while ((n / 10) != 0) {
		if (n % 10 == 0 && status == 0) {
			n = n / 10;
			continue;
		}
		cout << n % 10;
		status = 1;
		n = n / 10;
	}
	cout << n % 10;
	return 0;
}