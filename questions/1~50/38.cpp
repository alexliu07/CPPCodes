#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5],t;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[j] > a[i]) {
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	return 0;
}