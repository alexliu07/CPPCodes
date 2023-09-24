#include<bits/stdc++.h>
using namespace std;
int main(){
	int apples[10], hand,count=0,n;
    cin >> n;
    cin >> hand;
	for (int i = 0; i < n; i++) {
		cin >> apples[i];
	}
	for (int i = 0; i < n; i++) {
		if ((hand + 30) >= apples[i]) {
			count++;
		}
	}
	cout << n - count;
	return 0;
}