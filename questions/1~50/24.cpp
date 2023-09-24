#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,total=0;
	cin >> a;
	while (a / 10 != 0) {
		total = total + (a % 10);
		a = a / 10;
	}
	total = total + (a % 10);
	cout << total;
	return 0;
}