#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void dao(char str1[]){
	int length=strlen(str1);
	char tg;
	
	for(int i=0;i<length/2;i++){
		tg=str1[i];
	 str1[i]=str1[length-1-i];
		str1[length-1-i]=tg;
	}
}
int main(){
	char str1[100000];
	fgets(str1,sizeof(str1),stdin);
	char str2[100000];
	strcpy(str2,str1);
	//strrev(str1);
	dao(str1);
	if(strcmp(str1,str2)==0){
		printf("\nla chuoi thuan nghich");
	}
	else {
	printf("\nnot ");}
	return 0;
}