#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[14] = { 4,7,44,47,74,77,444,447,474,477,777,774,747,744 };
	int m,status=0;
	cin >> m;
	for (int i = 0; i < 14; i++) {
		if (m % a[i] == 0) {
			status = 1;
			break;
		}
	}
	if (status == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}