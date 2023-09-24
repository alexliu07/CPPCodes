#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,status=0;
	string s;
	cin >> n;
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		status = 0;
		getline(cin, s);
		for (int j = 0; j < s.length(); j++) {
			if (s[j] >= 'A' && s[j] <= 'Z') {
				s[j] = s[j] + 32;
			}
		}	
		for (int j = 0; j < s.length(); j++) {
			if (s[j] != s[s.length() - 1 - j]) {
				status = 1;
			}
		}
		if (status == 1) {
			cout << "N" << endl;
		}
		else {
			cout << "Y" << endl;
		}
	}
	return 0;
}