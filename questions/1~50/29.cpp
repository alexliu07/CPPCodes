#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10] = { 0 }, status = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++) {
		status = 0;
		for (int j = 0; j < 5; j++) {
			if (a[j] == i) {
				status = 1;
				break;
			}
		}
		if (status == 1) {
			continue;
		}
		cout << i << " ";
	}
	return 0;
}