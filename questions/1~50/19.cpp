#include<bits/stdc++.h>
using namespace std;
int main(){
	int apples[10], hand,count=0;
	for (int i = 0; i < 10; i++) {
		cin >> apples[i];
	}
	cin >> hand;
	for (int i = 0; i < 10; i++) {
		if ((hand + 30) >= apples[i]) {
			count++;
		}
	}
	cout << count;
	return 0;
}