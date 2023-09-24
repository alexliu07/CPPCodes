#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int mini(int a[],int n) {
	int temp=0;
	if (n == 1) {
		return a[0];
	}
	else {
		temp = mini(a, n - 1);
		if (temp < a[n - 1]) {
			return temp;
		}
		else {
			return a[n - 1];
		}
	}
}
int main(){
	int b[10] = { 12,2,453,453,1123,232,12,34,44,98 }, c = 10;
	cout << mini(b, c);
	return 0;
}