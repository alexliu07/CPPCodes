#include<bits/stdc++.h>
#define N 1000005
typedef long long ll;
int main(){
	freopen("game.in","r",stdin);
	freopen("game.out","w",stdout);
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	int n;
	ll cnt=0;
	char x;
	std::stack<char> s;
	std::cin >> n;
	std::cin >> x;
	s.push(x);
	for(int i=2;i<=n;i++){
		std::cin >> x;
		if(!s.empty()){
			if(x == s.top()){
				cnt++;
				s.pop();
			}else s.push(x);
		}else{
			cnt++;
			s.push(x);
		}
	}
	std::cout << cnt;
	return 0;
}
