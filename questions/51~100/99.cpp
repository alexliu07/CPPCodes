#include<bits/stdc++.h>
using namespace std;
int main() {
	int count = 0;
	string target, s, tmp;
	getline(cin, target);
	getline(cin, s);
	for (int i = 0; i < target.length(); i++) {
		if (target[i] >= 'A' && target[i] <= 'Z') {
			target[i] = target[i] + 32;
		}
	}
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + 32;
		}
	}
	for (int i = 0; i < s.length(); i++) {
		tmp = s.substr(i, target.length());
		if (tmp == target) {
			count++;
		}
	}
	cout << count;
	return 0;
}
