#include <stdio.h>
#include <string.h>
#include<ctype.h>
void hoa(char str[]){
	int length=strlen(str);
	for(int i=0;i<length;i++){
		str[i]= toupper(str[i]);
	}
}
void thuong(char str[]){
	int length=strlen(str);
	for(int i=0;i<length;i++){
		str[i]= tolower(str[i]);
	}
}
int main() {
    char str[100000];
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự newline nếu có
    /*if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }*/
hoa(str);
puts(str);
   thuong(str);
   puts(str);
    return 0;
}