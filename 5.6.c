#include <stdio.h>
#include <string.h>
#include<ctype.h>
void khoangtrang(char a[],int size){	
	int j=0;
	for(int i=0;i<size;i++){
		if(!isblank(a[i])){
			a[j]=a[i];
			j++;
		}
	}
	a[j]='\0';
}
void kitu(char a[],int size){
	a[0]=toupper(a[0]);
	for(int i=1;i<size;i++){
		a[i]=tolower(a[i]);
	}
}
int main(){
	char a[100];
	fgets(a,sizeof(a),stdin);
	int size=strlen(a);
	khoangtrang(a,size);
	kitu(a,size);
	puts(a);
	return 0;
	
}