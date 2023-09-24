#include<bits/stdc++.h>
using namespace std;
int main(){
	int l, m, start, end, count = 0, trees[10000];
	cin >> l >> m;
	for (int i = 0; i <= l; i++) {
		trees[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		cin >> start >> end;
		for (int j = start; j <= end; j++) {
			trees[j] = 1;
		}
	}
	for (int i = 0; i <= l; i++) {
		if (trees[i] == 0) {
			count++;
		}
	}
	cout << count;
	return 0;
}