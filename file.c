#include "stdio.h"

int main() 
{
	char a[2][20]={"李宝禄","2012020226"};
    FILE *fp;
    if((fp = fopen("resume.txt", "w")) == NULL)
	{
		printf("Can't open the file!\n");
		return 0;
	}
        printf("已在当前目录生成resume.txt!\n");
        fprintf(fp,"姓名：%s\n学号：%s\n",a[0],a[1]);
		fclose(fp);
		return 0;
}
//demo_1
//demo_1