#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, number[10] = { 0 }, prize[10] = { 0 }, psnum[10] = { 0 }, money = 0, minmoney;
	cin >> n;
	for (int i = 0; i < 3; i++) {
		cin >> number[i] >> prize[i];
	}
	minmoney = prize[0] * ceil(1.0 * n / number[0]);
	for (int i = 1; i < 3; i++) {
		money = prize[i] * ceil(1.0 * n / number[i]);
		if (money < minmoney) {
			minmoney = money;
		}
	}
	cout << minmoney;
	return 0;
}