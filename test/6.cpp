#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,time[1000][10],order[1000]={0}, orderi = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> time[i][0] >> time[i][1];
	}
	//����
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (time[i][1] < time[j][1]) {
				swap(time[i], time[j]);
			}
		}
	}
	//��С����Ѱ��
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			order[orderi] = time[i][1];
			orderi++;
		}
		//����Ƿ�ʼʱ���Ƿ�����һ������ʱ��֮��
		else if (time[i][0] > order[orderi-1]) {
			order[orderi] = time[i][1];
			orderi++;
		}
	}
	cout << orderi;
	return 0;
}