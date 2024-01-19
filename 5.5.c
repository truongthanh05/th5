#include <stdio.h>
#include <string.h>
#include<ctype.h>
void demkhongpb(char a[]){
	int b[97+26]={0};
	int size=strlen(a);
	
	for(int i=0;i<size;i++){
		char m= tolower(a[i]);
		b[m]++;
	}
	for(int i=97;i<123;i++){
		printf("%c : %d\n",(char)i,b[i]);
	}
}

void dempb(char a[]){
	int b[97+26]={0};
	int size=strlen(a);
	
	for(int i=0;i<size;i++){
		b[a[i]]++;
	}
	for(int i=97;i<123;i++){
		printf("%c : %d\n",(char)i,b[i]);
	}
	for(int i=65;i<91;i++){
		printf("%c : %d\n",(char)i,b[i]);
	}
}
int main(){
	char a[100];
	fgets(a,sizeof(a),stdin);
	printf("so tu khong phan biet chu hoa va thuong\n");
	demkhongpb(a);
	printf("so tu phan biet chu hoa va thuong\n");
	dempb(a);
	return 0;
	
}