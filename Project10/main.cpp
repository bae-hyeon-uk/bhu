#include <stdio.h>

int main(void)
{
	int i=2, j;
	do {
		printf("�� �Է�(2~9 ����): ");
		scanf_s("%d", &i);

		if (i >= 2 && i <= 9) {
			break;
		}
		else {
			printf("�߸��� �Է�! 2���� 9 ������ ���ڸ� �Է��ϼ���.\n");
		}
	} while (1);

		for (j = 1; j <= 9; j++)
		{

			printf("%d * %d = %d\n", i, j, i * j);
		}
		return 0;
}
