#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2, s3, s4, s5,max;
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	if (s1.length() > s2.length()) {
		max = s1;
	}
	else {
		max = s2;
	}
	if (s3.length() > max.length()) {
		max = s3;
	}
	if (s4.length() > max.length()) {
		max = s4;
	}
	if (s5.length() > max.length()) {
		max = s5;
	}
	cout << max;
	return 0;
}