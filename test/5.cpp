#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	swap(s1, s2);
	cout << s1 << " " << s2;
	return 0;
}