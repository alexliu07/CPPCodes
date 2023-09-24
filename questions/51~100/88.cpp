#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int oddnum = 0, evennum = 0,i=0;
	cin >> a;
	while (a[i] != '\0') {
		if (a[i] % 2 == 0) {
			evennum++;
		}
		else {
			oddnum++;
		}
		i++;
	}
	cout << oddnum << " " << evennum;
	return 0;
}