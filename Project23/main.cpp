#include <stdio.h>
#include <stdlib.h>      //�����Ҵ� �� ���

int main(void)    //�����佺�׳׽��� ü �Ҽ� �Ÿ��� ��
{
	int num;
	int* ap;
	int i, j, cnt = 0;

	printf(">��� �Է� : ");
	scanf_s("%d", &num);

	ap = (int*)malloc((num - 1) * sizeof(int));        //2���� ����ϹǷ� 1�� �����ϱ� ���� n-1�� �迭 ��� ���� ���
	if (ap == NULL)
	{
		printf("�޸� ����!\n");
		exit(1);                                       //�޸� �������� �ٷ� ����
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