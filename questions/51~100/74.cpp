#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,max,count,status;
	cin >> n;
	for (int i = 2; i < n; i++) {
		count = 0;
		status = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				count++;
				if (count == 3) {
					status = 1;
					break;
				}
			}
		}
		if (status == 0) {
			if (n % i == 0) {
				max = n / i;
				break;
			}
		}
	}
	cout << max;
	return 0;
}