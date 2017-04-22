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
}