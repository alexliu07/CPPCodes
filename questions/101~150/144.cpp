#include<stdio.h>
int main(){
	int coin,refund[4]={0},last=1,numbers[4]={20,10,5,1},i=0,total=0,count=0;
	scanf("%d",&coin);
	while(coin != 0){
		last = coin % numbers[i];
		refund[i] = (coin - last) / numbers[i];
		coin = last;
		i++;
	}
	for(int i=0;i<4;i++){
		total = total + refund[i];
		if(refund[i] != 0){
			count++;
		}
	}
	printf("%d %d",total,count);
	return 0;
}
