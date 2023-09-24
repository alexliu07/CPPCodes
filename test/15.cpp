#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int big=0, small=0, number=0,i=0;
	string a;
	cin >> a;
	while (a[i] != '\0') {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			big++;
		}
		else if (a[i] >= 'a' && a[i] <= 'z') {
			small++;
		}
		else if (a[i] >= '0' && a[i] <= '9') {
			number++;
		}
		i++;
	}
	printf("%d %d %d", big, small, number);
	return 0;
}