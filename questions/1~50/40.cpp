#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10] = { 1,2,3,4,5,6,7,8,9 },b,i=8;
	cin >> b;
	while (a[i] > b) {
		a[i + 1] = a[i];
		i--;
	}
	a[i + 1] = b;
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}