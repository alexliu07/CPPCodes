#include<bits/stdc++.h>
using namespace std;
int main(){
	int s = 0, i = 1, k;
	cin >> k;
	while (s <= k) {
		s = s + i;
		i++;
	}
	cout << i-1;
	return 0;
}