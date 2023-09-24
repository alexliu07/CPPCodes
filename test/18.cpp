#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++) {
		//大写转小写
		if (a[i] >= 'A' && a[i] <= 'Z') {
			printf("%c",a[i] + 32);
		}
		//小写转大写
		else if (a[i] >= 'a' && a[i] <= 'z') {
			printf("%c", a[i] - 32);
		}
		//其余直接输出
		else {
			printf("%c", a[i]);
		}
	}
	return 0;
}