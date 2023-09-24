#include<bits/stdc++.h>
using namespace std;
int main(){
	int ten, count = 0;
	cin >> ten;
	while (ten != 0) {
		if (ten % 2 == 1) {
			count++;
		}
		ten = ten / 2;
	}
	cout << count;
	return 0;
}