#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, height[100000] = { 0 }, k[1000] = { 0 }, count[1000] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> k[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (height[i] == k[j]) {
				count[j]++;
				break;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << count[i] << " ";
	}
	return 0;
}