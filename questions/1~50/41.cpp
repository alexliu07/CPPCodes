#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[100];
	int i = 0, big_char = 0, small_char = 0, numbers = 0, spaces = 0, others = 0;
	for (int j = 0; j < 100; j++) {
		scanf("%c", &a[j]);
		if (a[j] == '\n') {
			a[j] = 0;
			break;
		}
	}
	while (a[i] != 0)
	{
		if (a[i] >= 65 && a[i] <= 90) {
			big_char++;
		}
		else if (a[i] >= 97 && a[i] <= 122) {
			small_char++;
		}
		else if (a[i] >= 48 && a[i] <= 57) {
			numbers++;
		}
		else if (a[i] == 32) {
			spaces++;
		}
		else {
			others++;
		}
		i++;
	}
	cout << big_char << "\n" << small_char << "\n" << numbers << "\n" << spaces << "\n" << others;
	return 0;
}