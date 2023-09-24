#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	freopen("ball.in","r",stdin);
	freopen("ball.out","w",stdout);
	int n,k,min_num,temp=0,timea,timeb,times,total=0;
	scanf("%d %d",&n,&k);
	int a[1000]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	timea = n/k;
	timeb = n - (timea*k);
	if(n<=k){
		times = 1;
	}else if((timea+timeb)<=k){
		times = timea+1;
	}else{
		times = timea+2;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j] > a[i]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}	
		}
	}
	temp = 0;
	for(int i=0;i<times;i++){
		temp=0;
		for(int j=0;j<k;j++){
			temp = temp+a[j];
		}
		a[0] = temp;
		temp = 0;
		for(int j=k;j<n;j++){
			a[j-2] = a[j];
			a[j] = 0;
		}
		n = n-k+1;
		total = total+a[0];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[j] > a[i]){
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}	
			}
		}
	}
	printf("%d",total);
	return 0;
}
