#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int count = 0;
	cin >> a;
	for(int i=0;i<a.length();i++){
		if (a[i] == '1') {
			count++;
		}
	}
	cout << count;
	return 0;
}