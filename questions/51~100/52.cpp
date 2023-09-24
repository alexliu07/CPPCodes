#include<bits/stdc++.h>
using namespace std;
int main() {
	int date1, date2, tmp, tmpnum, t = 0, month, date, year, status, count = 0;
	char date1s[10];
	cin >> date1 >> date2;
	for (int i = date1; i <= date2; i++) {
		year = 0;
		month = 0;
		date = 0;
		status = 0;
		tmp = i;
		t = 0;
		while (tmp != 0) {
			tmpnum = tmp % 10;
			date1s[7 - t] = tmpnum + '0';
			tmp = tmp / 10;
			t++;
		}
		year = (date1s[0] - '0') * 1000 + (date1s[1] - '0') * 100 + (date1s[2] - '0') * 10 + (date1s[3] - '0');
		month = (date1s[4] - '0') * 10 + (date1s[5] - '0');
		if (month < 1 || month > 12) {
			continue;
		}
		date = (date1s[6] - '0') * 10 + (date1s[7] - '0');
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			if (month == 2) {
				if (date < 1 || date >29) {
					continue;
				}
			}
			else if (month <= 7) {
				if (month % 2 != 0) {
					if (date < 1 || date>31) {
						continue;
					}
				}
				else {
					if (date < 1 || date>30) {
						continue;
					}
				}
			}
			else if (month >= 8) {
				if (month % 2 == 0) {
					if (date < 1 || date>31) {
						continue;
					}
				}
				else {
					if (date < 1 || date>30) {
						continue;
					}
				}
			}
		}
		else {
			if (month == 2) {
				if (date < 1 || date >28) {
					continue;
				}
			}
			else if (month <= 7) {
				if (month % 2 != 0) {
					if (date < 1 || date>31) {
						continue;
					}
				}
				else {
					if (date < 1 || date>30) {
						continue;
					}
				}
			}
			else if (month >= 8) {
				if (month % 2 == 0) {
					if (date < 1 || date>31) {
						continue;
					}
				}
				else {
					if (date < 1 || date>30) {
						continue;
					}
				}
			}
		}
		for (int j = 0; j < 4; j++) {
			if (date1s[j] != date1s[7 - j]) {
				status = 1;
			}
		}
		if (status == 1) {
			continue;
		}
		count++;
	}
	cout << count;
	return 0;
}