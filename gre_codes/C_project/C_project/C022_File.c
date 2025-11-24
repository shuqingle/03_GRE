#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	FILE* fp;
	fp = fopen("example.txt", "a+");
	if (fp==NULL)
	{
		perror("打开文件失败！");
		return 1;
	}
	fprintf(fp, "你好啊\n");
	//关闭文件
	if (fclose(fp) != 0) {
		perror("关闭文件失败");
		return 1;
	}

	/*fp = fopen("example.txt", "r");
	if (fp==NULL)
	{
		perror("打开文件失败");
		return 1;
	}*/
	//fclose(fp);
	return 0;
}