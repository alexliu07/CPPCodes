#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n = 0;
	string a;
	getline(cin, a);
	while (a[n] != '\0') {
		n++;
	}
	for (int i = n-1; i >= 0; i--) {
		cout << a[i];
	}
	return 0;
}