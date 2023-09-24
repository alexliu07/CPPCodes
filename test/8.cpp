#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2,s3;
	int n,count=0,i=0;
	getline(cin,s1);
	getline(cin,s2);
	n = s1.find(s2, 0);
	if (n < s1.length() && n >= 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	cout << "\n";
	for (int i = 0; i < s1.length(); i++) {
		s3 = s1.substr(i, s2.length());
		if (s3 == s2) {
			count++;
		}
	}
	cout << count;
	return 0;
}