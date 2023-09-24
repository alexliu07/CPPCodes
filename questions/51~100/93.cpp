#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int i = 0,count = 0;
	while (a[i] != '\0') {
		if (a[i] == '7') {
			count++;
		}
		i++;
	}
	cout << count;
	return 0;
}