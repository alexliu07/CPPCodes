#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, height[100000] = { 0 }, k, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}
	cin >> k;
	for (int i = 0; i < n; i++) {
		if (height[i] == k) {
			count++;
		}
	}
	cout << count;
	return 0;
}