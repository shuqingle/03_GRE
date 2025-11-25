#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main022(void) {
	FILE* fp;
	fp = fopen("example.txt", "w");
	fprintf(fp, "姓名:%s\n", "李磊");
	fprintf(fp, "年龄:%d\n", 21);
	fprintf(fp, "成绩:%.2f\n",85.5);
	fputs("这是一个测试字符串\n", fp);

	if (fclose(fp) != 0) {
		perror("关闭文件失败");
		return 1;
	}
	;
	//fp = fopen("example.txt", "w");
	//if (fp==NULL)
	//{
	//	perror("打开文件失败！");
	//	return 1;
	//}
	//fprintf(fp, "你好啊\n");
	////关闭文件
	//if (fclose(fp) != 0) {
	//	perror("关闭文件失败");
	//	return 1;
	//}

	/*fp = fopen("example.txt", "r");
	if (fp==NULL)
	{
		perror("打开文件失败");
		return 1;
	}*/
	//fclose(fp);
	return 0;
}