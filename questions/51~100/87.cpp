#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int big = 0, small = 0, space = 0, i = 0;
	getline(cin, a);
	while (a[i] != '\0') {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			big++;
		}
		else if (a[i] >= 'a' && a[i] <= 'z') {
			small++;
		}
		else if (a[i] == ' ') {
			space++;
		}
		i++;
	}
	printf("%d %d %d", big, small, space);
	return 0;
}