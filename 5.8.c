#include <stdio.h>
#include <string.h>
#include<ctype.h>
void hienthi(char a[],int size){
	int i,j;
	int ho,ten,endho,endten;
	for(j=size-1;j>=0;j--){
		if(isblank(a[j])){
			ten=j+1;
			endten=size-1;
			break;
		}
	}
	
	for( i=0;i<size;i++){
		if(isblank(a[i])|| a[i]=='\n'){
			ho=0;
			endho=i;
			break;
		}
	}
	for(int c=ten;c<endten;c++){
				printf("%c",a[c]);
			}
			printf(" ");
	for(int m=i+1;m<j;m++){
		printf("%c",a[m]);
	}
	printf(" ");
	for(int d=ho;d<endho;d++){
				printf("%c",a[d]);
			}
	
	
}
int main(){
	char a[100];
	printf("nhap ho va ten ");
	fgets(a,sizeof(a),stdin);
	int size=strlen(a);
	hienthi(a,size);
	return 0;
	
}