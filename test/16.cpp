#define _CRT_SECURE_NO_WARNINGS 1
#include<bits/stdc++.h>
using namespace std;
int main(){
	int chairnum,shelfheight,chairheight[1000],count=0;
	cin >> chairnum >> shelfheight;
	for(int i=0;i<chairnum;i++){
		cin >> chairheight[i];
	}
	//���Ӹ߶�����
	//sort(chairheight,chairheight+chairnum);
	for(int i=0;i<chairnum;i++){
		for(int j=0;j<chairnum;j++){
			if(chairheight[i] > chairheight[j]){
				swap(chairheight[i],chairheight[j]);
			}
		}
	}
	//ȡ�����Ӹ߶�
	for(int i=0;i<chairnum;i++){
		count += chairheight[i];
		if(count >= shelfheight){
			cout << i+1;
			break;
		}
	} 
	return 0;
}