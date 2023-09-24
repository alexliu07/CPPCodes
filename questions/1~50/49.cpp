#include<bits/stdc++.h>
using namespace std;
int main(){
	string isbn;
	int nums[20],code=0,codetarget=0,j=0;
	cin >> isbn;
	for (int i = 0; i < 12; i++) {
		if (isbn[i] != '-') {
			nums[j] = isbn[i] - '0';
			j++;
		}
	}
	codetarget = isbn[12];
	for (int i = 0; i < 9; i++) {
		code = code + nums[i] * (i + 1);
	}
	code = code % 11;
	if (code == 10) {
		code = 'X';
	}
	else {
		code = code + '0';
	}
	if (code == codetarget) {
		cout << "Right";
	}
	else {
		isbn[12] = code;
		for (int i = 0; i < 13; i++) {
			cout << isbn[i];
		}
	}
	return 0;
}