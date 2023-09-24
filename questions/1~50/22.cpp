#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m,tmp,count=0;
	cin >> n >> m;
	for (int i = n; i <= m; i++) {
		tmp = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				tmp++;
			}
		}
		if (tmp == 2) {
			count++;
		}
	}
	cout << count;
	return 0;
}