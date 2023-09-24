#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a = "2143145212";
	int num=0;
	for (int i = 0; i < a.size(); i++) {
		num += (a[i] - '0') * pow(10, a.size() - i - 1);
	}
	cout << num;
	return 0;
}