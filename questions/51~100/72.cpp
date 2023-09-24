#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, w[10000]={0},water[10000]={0},minx=0,i=0,maxs=0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < n; i++) {
		if (i < m) {
			water[i] = w[i];
			continue;
		}
		minx = 0;
		for (int j = 0; j < m; j++) {
			if (water[j] < water[minx]) {
				minx = j;
			}
		}
		water[minx] += w[i];
	}
	maxs = water[0];
	for (int i = 0; i < m; i++) {
		if (water[i] > maxs) {
			maxs = water[i];
		}
	}
	cout << maxs;
	return 0;
}