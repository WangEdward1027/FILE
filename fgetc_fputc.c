#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

//fgetc：一个字符一个字符地读  
//fputc: 一个字符一个字符地写

int main(void) {
	FILE* src = fopen("src.txt", "r");
	if (src == NULL) {
		perror("fopen");
		return -1;
	}    

	FILE* dst = fopen("dst.txt", "w");
	if (dst == NULL) {
		perror("fopen");
		return -1;
	}    

	int c;
	while ((c = fgetc(src)) != EOF) {
		//fputc(c, dst);		   //实现文件复制，一个字符一个字符的复制
		//fputc(tolower(c), dst);  //全文替换为小写
		fputc(toupper(c), dst);	   //全文替换为大写
	}

	fclose(src);
	fclose(dst);

	return 0;
}
