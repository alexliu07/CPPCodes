#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, q, bookCode[1000] = { 0 }, readerCodeLength[1000] = { 0 }, readerCode[1000] = { 0 }, tmp, target, book;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> bookCode[i];
	}
	for (int i = 0; i < q; i++) {
		cin >> readerCodeLength[i] >> readerCode[i];
	}
	for (int i = 0; i < q; i++) {
		book = -1;
		for (int j = 0; j < n; j++) {
			target = 0;
			tmp = bookCode[j];
			for (int k = 0; k < readerCodeLength[i]; k++) {
				target += (tmp % 10) * pow(10,k);
				tmp = tmp / 10;
			}
			if (readerCode[i] == target) {
				if (book == -1) {
					book = bookCode[j];
				}
				else if (bookCode[j] < book) {
					book = bookCode[j];
				}
			}
		}
		cout << book << endl;
	}
	return 0;
}