#include<bits/stdc++.h>
using namespace std;
int main(){
	char brackets[1000];
	string s;
	int n,top=0,status=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s;
		top = 0;
		for(int j=0;j<s.length();j++){
			status = 0;
			if(s[j] == '>' && brackets[top-1] == '<'){
				top--;
			}else if(s[j] == ')' && brackets[top-1] == '('){
				for(int k=0;k<top-1;k++){
					if(brackets[k] == '<'){
						status = 1;
					}
				}
				if(status == 0){
					top--;
				}
			}else if(s[j] == ']' && brackets[top-1] == '['){
				for(int k=0;k<top-1;k++){
					if(brackets[k] == '<' || brackets[k] == '('){
						status = 1;
					}
				}
				if(status == 0){
					top--;
				}
			}else if(s[j] == '}' && brackets[top-1] == '{'){
				for(int k=0;k<top-1;k++){
					if(brackets[k] == '<' || brackets[k] == '(' || brackets[k] == '['){
						status = 1;
					}
				}
				if(status == 0){
					top--;
				}
			}
			if(s[j] == '<'){
				brackets[top] = s[j];
				top++;
			}else if(s[j] == '('){
				brackets[top] = s[j];
				top++;
			}else if(s[j] == '['){
				brackets[top] = s[j];
				top++;
			}else if(s[j] == '{'){
				brackets[top] = s[j];
				top++;
			}
		}
		if(top == 0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}	
	return 0;
}