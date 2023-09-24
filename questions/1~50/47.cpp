#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int a,b,d,status=0,n,counter=0,flag=0;
	cin >> a >> b >> d;
	for (int i = a; i <= b; i++) {
		flag = 0;
		status = 0;
		//�ж�����
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			continue;
		}
		//�ж��Ƿ����ض�����
		n = i;
		while (n != 0) {
			if (n % 10 == d) {
				status = 1;
				break;
			}
			n = n / 10;
		}
		if (status == 1) {
			counter++;
		}
	}
	cout << counter;
	return 0;
}