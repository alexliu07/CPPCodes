#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r,t[1000]={0},tr[1000]={0},sum=0,tmp=0;
	cin >> n >> r;
	for(int i=0;i<n;i++){
		cin >> t[i];
	}
	//����
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(t[i] < t[j]){
				swap(t[i],t[j]);
			}
		}
	}
	//ˮ��ͷʱ���ۼ�
	for(int i=0;i<n;i++){
		if(tmp == r){
			tmp = 0;
		}
		tr[tmp] += t[i];
		sum += tr[tmp];
		tmp++;
	}
	cout << sum;
	return 0;
} 