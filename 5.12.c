#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdbool.h>
void tach(char a[],char copy[][20],int size,int dong){
	int cot=0;
	for(int i=0;i<size;i++){
		if(a[i]!=' '&& a[i]!='\0' && a[i]!='\n'){
			copy[dong][cot++]=a[i];
		}
		else{
			copy[dong][cot]='\0';
			dong++;
			cot=0;
		}
	}
}
void sep(char copy[][20],int size){
	char p[20];
	for(int j=0;j<size;j++){
	for(int i=size-1;i>j ;i--){
		if( strcmp(copy[i-1],copy[i])>0){
			strcpy(p,copy[i]);
			strcpy(copy[i],copy[i-1]);
			strcpy(copy[i-1],p);
			
		}
	}
}
}
void hienthi(char copy[][20],int size,int dong){
	
	for(int i=0;i<dong;i++){
		printf("%s ",copy[i]);
	}
}
int main(){
	char a[100];
	int dong=0;
	char copy[100][20];
	fgets(a,sizeof(a),stdin);
	int size=strlen(a)-1;
	
	tach(a,copy,size,dong);
	sep(copy,size);
	hienthi(copy,size,dong);
	return 0;
}