#include <stdio.h>
#include <stdlib.h>      //동적할당 시 사용

int main(void)    //에라토스테네스의 체 소수 거르는 법
{
	int num;
	int* ap;
	int i, j, cnt = 0;

	printf(">양수 입력 : ");
	scanf_s("%d", &num);

	ap = (int*)malloc((num - 1) * sizeof(int));        //2부터 출력하므로 1을 제외하기 위해 n-1의 배열 요소 개수 사용
	if (ap == NULL)
	{
		printf("메모리 부족!\n");
		exit(1);                                       //메모리 부족으로 바로 종료
	}

	for (i = 0; i < (num - 1); i++)
	{
		ap[i] = i + 2;
	}
	i = 0;
	while (1)
	{
		while ((ap[i] == 0) && (i < (num - 2)))  
		{
			i++;
		}
		if (i == (num - 2)) break;
		for (j = i + 1; j < (num - 1); j++)
		{
			if ((ap[j] % ap[i]) == 0)
			{
				ap[j] = 0;
			}
		}
		i++;
	}

	for (i = 0; i < (num - 1); i++)
	{
		if (ap[i] != 0)
		{
			printf("%5d", ap[i]);
		}
		else
		{
			printf("%5c", 'X');
		}

		if ((i + 1) % 5 == 0)
		{
			printf("\n");
		}
	}

	free(ap);

	return 0;
}