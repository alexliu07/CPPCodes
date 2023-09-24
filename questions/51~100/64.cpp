#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int start, step;
	getline(cin, a);
	cin >> start >> step;
	for (int i = start; i < a.size(); i = i + step) {
		cout << a[i];
	}
	return 0;
}