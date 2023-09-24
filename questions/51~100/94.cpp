#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int i = 0,count=0;
	cin >> a;
	while (a[i] != '\0') {
		if (a[i] == 'D' || a[i] == 'd') {
			count++;
		}
		i++;
	}
	cout << count;
	return 0;
}