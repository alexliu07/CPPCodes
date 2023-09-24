#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a[1000], i = 0;
	cin >> n;
	while (n != 0) {
		a[i] = n % 10;
		n = n / 10;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << a[j] << "\n";
	}
	return 0;
}