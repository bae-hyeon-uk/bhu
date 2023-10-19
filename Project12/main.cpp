#include<stdio.h>

int main(void)
{
	int n, pn, j;
	int cnt = 0;

	scanf_s("%d", &n);
	int i;
	for (i = 2; i <= n; i++)
	{
		pn = 1;
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
			{
				pn = 0;
				break;
			}
		}
		if (pn == 1)
		{
			printf("% 5d", i);
			cnt++;
			if ((cnt % 5) == 0)
				printf("\n");
		}
	}

	return 0;
}