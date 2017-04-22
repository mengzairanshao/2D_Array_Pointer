#include <stdio.h>
int main()
{
	printf("int的长度为: %d \n",sizeof(int));
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int *p, m;
	for (m = 1, p = &a[0][0]; p <= &a[2][3]; p++)
	{
		printf("%8d", *p);
		if ((m++) % 4 == 0)
			printf("\n");
	}
	int b[3][4] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int(*q)[4], i, j;
	q = b;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			printf("%8d", *(*(q + i - 1) + j - 1));//打印元素
		}
		printf("\n");
		for (j = 1; j <= 4; j++)
		{
			printf("%8d", *(q + i - 1));//打印每行首地址
		}
		printf("\n");
		for (j = 1; j <= 4; j++)
		{
			printf("%8d", *(q + i - 1)+j-1);//打印每行的元素地址
		}
		printf("\n");
	}
}
