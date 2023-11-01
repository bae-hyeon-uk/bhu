#include <stdio.h>

int main(void)
{
	int i=2, j;
	do {
		printf("단 입력(2~9 사이): ");
		scanf_s("%d", &i);

		if (i >= 2 && i <= 9) {
			break;
		}
		else {
			printf("잘못된 입력! 2에서 9 사이의 숫자를 입력하세요.\n");
		}
	} while (1);

		for (j = 1; j <= 9; j++)
		{

			printf("%d * %d = %d\n", i, j, i * j);
		}
		return 0;
}
