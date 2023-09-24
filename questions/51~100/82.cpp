#include<bits/stdc++.h>
using namespace std;
int main(){
	char encrypted[400],decrypted[400];
	int n = -1;
	while (encrypted[n] != '\n') {
		scanf("%c", &encrypted[n+1]);
		n++;
	}
	for (int i = 0; i < n; i++) {
		if (encrypted[i] >= 65 && encrypted[i] <= 90) {
			if (encrypted[i] == 65 || encrypted[i] == 66) {
				decrypted[i] = encrypted[i] + 24;
			}
			else {
				decrypted[i] = encrypted[i] - 2;
			}
		}
		else if (encrypted[i] >= 97 && encrypted[i] <= 122) {
			if (encrypted[i] == 97 || encrypted[i] == 98) {
				decrypted[i] = encrypted[i] + 24;
			}
			else {
				decrypted[i] = encrypted[i] - 2;
			}
		}
		else {
			decrypted[i] = encrypted[i];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << decrypted[i];
	}
	return 0;
}