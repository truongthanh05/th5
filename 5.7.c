#include <stdio.h>
#include <string.h>
#include<ctype.h>
void  dem(char a[],int size){
	int start,end,count;
	int i;
	int count1=0,count2=0;
	for( i=0;i<size;i++){
		if(isblank(a[i])|| a[i]=='\n'){
			count=1;
			start=0;
			end=i;
			break;
		}
		count1++;
	}
	for(int j=i+1;j<size;j++){
		if(isblank(a[j])|| a[j]=='\n'){
			count++;
			if(count2>count1){
				start=j-count2;
				end=j;
			}
			count1=count2;
			count2=0;
		}
		count2++;
	}
	for(int i=start;i<end;i++){
		printf("%c",a[i]);
	}
	printf("\ntu so : %d ",start+1);
	
}

int main(){
	char a[100];
	fgets(a,sizeof(a),stdin);
	int size=strlen(a);
	printf("\nso tu dai nhat\n");
	dem(a,size);
//	puts(a);
	return 0;
	
}