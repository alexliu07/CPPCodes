#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int i;
	getline(cin, s);
	cin >> i;
	s.insert(i, "aaaa");
	cout << s;
	return 0;
}