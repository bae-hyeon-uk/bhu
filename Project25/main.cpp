#include <stdio.h>

int main(void)
{
	char ch;
	int len, max = 0;

	while (1)
	{
		ch = getchar();
		if (ch == -1)
			break;
		len = 0;
		while (ch != '\n')
		{
			len++;
			ch = getchar();
		}
		printf("���� : %d\n", len);
		if (len > max)
			max = len;
		printf("\n");
	}
	printf("���̰� ���� �� ������ ���� : %d\n", max);

	return 0;
}