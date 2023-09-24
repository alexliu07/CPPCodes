#include<bits/stdc++.h>
using namespace std;
int main(){
	int n[5]={0}, max = 0;
	cin >> n[0] >> n[1] >> n[2];
	for (int i = 0; i < 3; i++) {
		if (n[i] > max) {
			max = n[i];
		}
	}
	cout << max;
	return 0;
}