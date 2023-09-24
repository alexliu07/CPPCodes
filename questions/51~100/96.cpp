#include<bits/stdc++.h>
using namespace std;
int main(){
	int count = 0;
	string s;
	getline(cin,s);
	for (int i = 0; i < s.length(); i++) {
		if (i == 0 && i != s.length() - 1) {
			continue;
		}
		if ((s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i]>'z') && ((s[i-1] >= 'A' && s[i-1] <= 'Z') || (s[i-1] >= 'a' && s[i-1] <= 'z'))) {
			count++;
		}
		if (i == s.length() - 1) {
			if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
