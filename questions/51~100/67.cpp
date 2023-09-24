#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, i = 0,linkn=0,status=0,j=0;
	string s,tmp;
	char last;
	cin >> n >> s;
	if (n == 1) {
		while (s[i] != '\0') {
			if (s[i] >= 'a' && s[i] <= 'z') {
				s[i] = s[i] - 32;
			}
			i++;
		}
		cout << s;
	}
	else if (n == 2) {
		while (s[i] != '\0') {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = s[i] + 32;
			}
			i++;
		}
		cout << s;
	}
	else if (n == 3) {
		for (int i = s.length() - 1; i >= 0; i--) {
			cout << s[i];
		}
	}
	else if (n == 4) {
		while (s[i] != '\0') {
			if (s[i] >= 'a' && s[i] <= 'z') {
				s[i] = s[i] - 32;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = s[i] + 32;
			}
			i++;
		}
		cout << s;
	}
	else if (n == 5) {
		while (s[i] != '\0') {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = s[i] + 32;
			}
			i++;
		}
		for(int i=0;i<s.length();i++){
			cout << s[i];
			j=i;
			while(s[j]+1==s[j+1]&&s[j+1]+1==s[j+2]){
				j++;
			}
			if(j>i){
				cout<<'-';
				i=j;
			}
		} 
	}
	return 0;
}
