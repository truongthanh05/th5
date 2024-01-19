#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdbool.h>
int dem(char a[]){
	int size =strlen(a);
	int gtnow,gtlast=0;
	int ketqua=0;
	for(int i=size-1;i>=0;i--){
		if(a[i]!=' ' || a[i]!='\n'){
		
		switch(a[i]){
			case 'M':{
				gtnow=1000;
				break;
			}
			case 'D':{
				gtnow=500;
				break;
			}
			case 'C':{
				gtnow=100;
				break;
			}
			case 'L':{
				gtnow=50;
				break;
			}
			case 'X':{
				gtnow=10;
				break;
			}
			case 'V':{
				gtnow=5;
				break;
			}
			case 'I':{
				gtnow=1;
				break;
			}
			
		}
		if(gtnow>=gtlast){
		
		ketqua+=gtnow;}
		else {
			ketqua-=gtnow;
		}
		gtlast=gtnow;
	}
	}
	return ketqua;
}
void chuyen(unsigned long long num){
	while(num>0){
		if(num>=1000){
			printf("M");
			num-=1000;
		}
		else if(num>=500){
			printf("D");
			num-=500;
		}
			else if(num>=100){
			printf("C");
			num-=100;
		}
			else if(num>=50){
			printf("L");
			num-=50;
		}
			else if(num>=10){
			printf("X");
			num-=10;
		}
		else if(num>=9){
			printf("IX");
			num-=9;
		}
			else if(num>=5){
			printf("V");
			num-=5;
		}
		else if(num>=4){
			printf("IV");
			num-=4;
		}
			else if(num>=1){
			printf("I");
			num-=1;
		}
		
	}
}
int main(){
	unsigned long long num;
	char a[100];
	fgets(a,sizeof(a),stdin);
	printf("gia tri la ma cua %s la : %d ",a,dem(a));
	printf("\n nhap gia tri duong chuyen sang so la ma : ");
	scanf("%llu",&num);
	printf("%llu chuyen sang la ma : ",num);
	chuyen(num);
	return 0;
}