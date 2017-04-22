#include <stdio.h>
int main()
{
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int *p, m;
	for (m = 1, p = &a[0][0]; p <= &a[2][3]; p++)
	{
		printf("%4d", *p);
		if ((m++) % 4 == 0)
			printf("\n");
	}
	int b[3][4] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int(*q)[4], i, j;
	q = a;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 4; j++)
			printf("%d ", *(*(q + i - 1) + j - 1));
		printf("\n");
	}
}
