#include "stdio.h"

int main() 
{
	char a[2][20]={"�»","2012020226"};
    FILE *fp;
    if((fp = fopen("resume.txt", "w")) == NULL)
	{
		printf("Can't open the file!\n");
		return 0;
	}
        printf("���ڵ�ǰĿ¼����resume.txt!\n");
        fprintf(fp,"������%s\nѧ�ţ�%s\n",a[0],a[1]);
		fclose(fp);
		return 0;
}
//demo_1