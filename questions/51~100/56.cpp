#include<bits/stdc++.h>
using namespace std;
int main(){
	int m, n,a[100]={0},last,count=0;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		a[i] = i + 1;
	}
	last = m;
	while(last > 0){
		for (int i = 0; i < m; i++) {
			if (a[i] == 0) {
				continue;
			}
			count++;
			if (count == n) {
				cout << a[i] << "\n";
				a[i] = 0;
				count = 0;
				last--;
			}
		}
	}
	return 0;
}