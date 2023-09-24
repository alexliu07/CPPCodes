#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	if ((a[a.size() - 1] - '0') % 2 == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}