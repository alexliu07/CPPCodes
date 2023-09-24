#include<stdio.h>
int main() {
	char idcard[18];
	int n,ids[18],year=0,month=0,date=0,yearstatus=0,datestatus=0,check=0,code=0,matches[11]={1,0,10,9,8,7,6,5,4,3,2},xnumbers[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char status[100],newidcode[100][20],newcode;
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		year=0;
		month=0;
		date=0;
		yearstatus=0;
		datestatus=0;
		check=0;
		code=0;
		scanf("%s",idcard);
		for(int i=0;i<18;i++){
			if(idcard[i] == 'X'){
				ids[i] = 10;
			}else{
				ids[i] = idcard[i] - '0';
			}
		} 
		year = ids[6]*1000+ids[7]*100+ids[8]*10+ids[9];
		if(year < 1980 || year > 2006) {
			status[j] = 'Y';
			continue;
		}
		month = ids[10]*10+ids[11];
		if(month < 1 || month > 12) {
			status[j] = 'M';
			continue;
		}
		date = ids[12]*10+ids[13];
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			yearstatus=1; 
		}
		if(date<1){
			datestatus=1;
		}
		if(month==2){
			if(date > 28){
				datestatus=1;
			}
		}else{
			if((month <= 7 && month % 2 != 0) || (month >= 8 && month % 2 == 0)){
				if(date > 31){
					datestatus=1;
				}
			}else{
				if(date > 30){
					datestatus=1;
				}
			}
		}
		if(yearstatus==1&&month==2&&date==29){
			datestatus=0; 
		}
		if(datestatus==1){
			status[j] = 'D';
			continue;
		}
		for(int i=0;i<11;i++){
			if(ids[17] == matches[i]){
				check = i;
			}
		}
		for(int i=0;i<17;i++){
			code = code+ids[i]*xnumbers[i];
		}
		code = code % 11;
		if(code != check){
			for(int i=0;i<11;i++){
				if(code == i){
					if(matches[i] == 10){
						idcard[17] = 'X';
					}else{
						idcard[17] = matches[i]+'0';
					}
				}
			}
			for(int i=0;i<18;i++){
				status[j] = 'c';
				newidcode[j][i] = idcard[i];
			}
			continue;
		}
		status[j] = 'T';
	}
	for(int i=0;i<n;i++){
		if(status[i] == 'c'){
			for(int j=0;j<18;j++){
				if(newidcode[i][j] == 'c'){
					newcode = ids[j]+'0';
				}else{
					newcode = newidcode[i][j];
				}
				printf("%c",newcode);
			}
		}else{
			printf("%c",status[i]);
		}
		printf("\n");
	} 
	return 0;
}
