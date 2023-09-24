#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%c",&a[i]);
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	return 0;
}