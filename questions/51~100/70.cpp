#include<bits/stdc++.h>
using namespace std;
int main(){
	char record[100000];
	int w=0, l=0, n = -1, j = 0;
	while (record[n] != 'E') {
		n++;
		scanf("%c", &record[n]);
	}
	for (int i = 0; i < n; i++) {
		if (record[i] == '\n') {
			continue;
		}
		if (record[i] == 'W') {
			w++;
		}
		else if (record[i] == 'L') {
			l++;
		}
		if ((w >= 11 || l >= 11) && (abs(w - l) >= 2)) {
			printf("%d:%d\n", w, l);
			w = 0;
			l = 0;
		}
	}
	printf("%d:%d\n", w, l);
	w = 0;
	l = 0;
	printf("\n");
	for (int i = 0; i < n; i++) {
		if (record[i] == '\n') {
			continue;
		}
		if (record[i] == 'W') {
			w++;
		}
		else if (record[i] == 'L') {
			l++;
		}
		if ((w >= 21 || l >= 21) && (abs(w - l) >= 2)) {
			printf("%d:%d\n", w, l);
			w = 0;
			l = 0;
		}
	}
	printf("%d:%d\n", w, l);
	return 0;
}