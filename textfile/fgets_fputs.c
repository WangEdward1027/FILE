#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//fgets：逐行读取 文本文件
//fputs：逐行写入 文本文件
//复制文件并添加行号

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

	char buffer[100];
	int line_num = 1;
	char line[100];

	while (fgets(buffer, sizeof(buffer), src) != NULL) {
		//printf("%s", buffer);	//输出文件的内容
		sprintf(line, "%d %s", line_num, buffer);
		fputs(line, dst);		
		line_num++;
	}
	
	fclose(src);
	fclose(dst);

	return 0;
}
