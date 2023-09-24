#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int head, tail,i=0,status = 0,indexes[100000]={0}, count = 0,tmp=0;
	cin >> a;
	while (a[i] != '\0') {
		if (a[i] != '*') {
			if (status == 0) {
				head = i;
				status = 1;
			}
			tail = i;
		}
		i++;
	}
	for (int i = head; i <= tail; i++) {
		if (a[i] == '*') {
			indexes[count] = i;
			count++;
		}
	}
	for (int i = 0; i < count; i++) {
		a.erase(indexes[i] - tmp, 1);
		tmp++;
	}
	cout << a;
	return 0;
}