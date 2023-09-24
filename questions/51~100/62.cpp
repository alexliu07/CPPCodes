#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
	int count = 0,status=0;
	while (getline(cin, s)) {
		count = 0;
		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < s.length() - i; j++) {
				status = 0;
				s1 = s.substr(j, i + 1);
				if (s1.length() == 1) {
					count++;
				}
				else{
					for (int k = 0; k < s1.length() / 2; k++) {
						if (s1[k] != s1[s1.length() -1 - k]) {
							status = 1;
							break;
						}
					}
					if (status == 0) {
						count++;
					}
				}
			}
		}
		cout << count << "\n";
	}
	return 0;
}