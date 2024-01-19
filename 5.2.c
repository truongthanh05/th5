#include<stdio.h>
#include<string.h>
int sotu(char str[],int size){
	int count=0;
	for(int i=0;i<size-1;i++){
		if(str[i]!=' '&& str[i+1] ==' '
		|| str[i]!=' ' && i+1==size-1 ){
		
			count++;
		}
	}
	return count;
}
int main(){
	char str[1000];
	fgets(str,999,stdin);
	int size = strlen(str);
	printf("so tu : %d",sotu(str,size));
	return 0;
}