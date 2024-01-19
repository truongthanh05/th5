#include <stdio.h>
#include <string.h>

// Hàm thay thế xâu s1 bằng xâu s2 trong chuỗi s
void thayTheXau(char s[], char s1[], char s2[]) {
    int len_s = strlen(s);
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
 char kq[200]={'\0'};
    // Duyệt qua từng vị trí trong chuỗi s
    for (int i = 0; i <len_s; i++) {
        if(strncmp(&s[i],s1,len_s1)==0){
        	strcat(kq,s2);
        	i+=len_s1;
		}
		else{
			strncat(kq,&s[i],1);
			i++;
		}
		 }
    strcpy(s,kq);
}

int main() {
    char chuoi[100], s1[20], s2[20];

    // Nhập chuỗi và xâu cần tìm và thay thế
    printf("Nhap chuoi: ");
    scanf("%99[^\n]", chuoi);

    printf("Nhap xau can tim: ");
    scanf("%s", s1);

    printf("Nhap xau thay the: ");
    scanf("%s", s2);

    // Thực hiện tìm và thay thế
    thayTheXau(chuoi, s1, s2);

    // Xuất kết quả ra màn hình
   // printf("Chuoi sau khi thay the: %s\n", chuoi);

    return 0;
}