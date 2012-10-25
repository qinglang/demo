#include "stdio.h"

int main()
{
	int i,j,t;
	int a[6];
	printf("请输入6个待排序数字：\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<6;i++)
		for(j=0;j<6-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		printf("由小到大排序结果如下：\n");
	  for(i=0;i<6;i++)
	   {
		  printf(" %d",a[i]);
	   }

	return 0;
}