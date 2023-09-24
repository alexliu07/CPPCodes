#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int i=0,status=0;
	cin >> a;
	while (a[i] != '\0') {
		status = 0;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] % 3 == 0 && status == 0) {
				a.erase(j, 1);
				status = 1;
			}
		}
		i++;
	}
	status = 0;
	for (int j = 0; j < a.length(); j++) {
		if (a[j] % 3 == 0 && status == 0) {
			a.erase(j, 1);
			status = 1;
		}
	}
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < a.length(); j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	cout << a;
	return 0;
}