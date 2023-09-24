#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int i = 0;
	getline(cin, a);
	while (a[i] != '\0') {
		cout << a[i] << " ";
		i++;
	}
	return 0;
}