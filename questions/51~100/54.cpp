#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, year[100] = { 0 }, month[100] = { 0 };
	string name[100], sex[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name[i] >> sex[i] >> year[i] >> month[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (year[i] > year[j]) {
				swap(name[i], name[j]);
				swap(sex[i], sex[j]);
				swap(year[i], year[j]);
				swap(month[i], month[j]);
			}
			else if (year[i] == year[j]) {
				if (month[i] > month[j]) {
					swap(name[i], name[j]);
					swap(sex[i], sex[j]);
					swap(year[i], year[j]);
					swap(month[i], month[j]);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << name[i] << " " << sex[i] << " " << year[i] << " " << month[i] << endl;
	}
	return 0;
}