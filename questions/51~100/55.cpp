#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,max_height=0,count=0;
	cin >> n;
	int mounts[100000];
	for (int i = 0; i < n; i++) {
		cin >> mounts[i];
	}
	for (int i = 0; i < n; i++) {
		if (mounts[i] > max_height) {
			count++;
			max_height = mounts[i];
		}
	}
	cout << count;
	return 0;
}