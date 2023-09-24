#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m, t[1000]={0}, d[1000]={0}, target[2000]={0}, topd = 0, topt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> d[i];
	}
	//��Ŀ��ȫ������
	for (int i = 0; i < n + m; i++) {
		if (i < n) {
			target[topt] = t[i];
		}
		else {
			target[topt] = d[topd];
			topd++;
		}
		topt++;
	}
	//��target����
	for (int i = 0; i < n+m; i++) {
		for (int j = 0; j < n+m; j++) {
			if (target[i] < target[j]) {
				swap(target[i], target[j]);
			}
		}
	}
	for (int i = 0; i < n + m; i++) {
		cout << target[i] << " ";
	}
	return 0;
}