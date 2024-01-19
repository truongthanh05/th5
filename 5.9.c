#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdbool.h>
bool nguyenam(char a){
	return  a=='a'||a=='e'||a=='i'||a=='o'||a=='u';
}
bool phuam(char a){
	if(!nguyenam(a) && a>='a' && a<='z'){
		return true;
	}
	return false;
}
bool kytuso(char a ){
	if(a>='0' && a<='9' | (a == '-' && isdigit(a + 1))){
		return true;
	}
	return false;
}
bool iswhite(char a){
	if(a==' ' || a=='\n' || a=='\t'){
		return true;
	}
	return false;
}
bool khac(char a){
	if(!nguyenam(a) && !phuam(a) && !kytuso(a) && !iswhite(a)){
		return true;
	}
	return false;
}
void hienthi(char a[],int size,int demN,int demP,int demS,int demK){
	for(int i=0;i<size;i++){
		a[i]=tolower(a[i]);
		if(nguyenam(a[i])){
			demN++;
		}
		else if(phuam(a[i])){
			demP++;
		}
		else if(kytuso(a[i])){
			demS++;
		}
		else if(khac(a[i])){
			demK++;
		}
	}
	printf("\nso nguyen am la : %d\n",demN);
		printf("\nso phu am la : %d\n",demP);
			printf("\nso ky tu so  la : %d\n",demS);
				printf("\nso ky tu khac la : %d\n",demK);
}
int main(){
	char a[1000];
	fgets(a,sizeof(a),stdin);
	int size=strlen(a);
	int demN=0, demP=0, demS=0, demK=0;

	hienthi(a,size,demN,demP,demS,demK);
	
	return 0;
}