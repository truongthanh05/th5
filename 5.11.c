#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdbool.h>
void tach(char a[]){
	int size=strlen(a);
	char copy[100][20];
	int demcot=0,demhang=0;
	for(int i=0;i<=size;i++){
		if(a[i]!=' '&& a[i]!='\0'){
			copy[demcot][demhang++]=a[i];
		}
		else{
			copy[demcot][demhang]='\0';
			demhang=0;
			demcot++;
		}
	}
	
	for(int i=demcot;i>=0;i--){
		printf("%s",copy[i]);
		printf(" ");
	}
	
}
int main(){
	char a[100];
	printf("nhap va chuoi ku tu : ");
	fgets(a,sizeof(a),stdin);
	printf("tach va dao nguoc la :\n ");
	tach(a);
	return 0;
}