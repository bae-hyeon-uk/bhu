#include<stdio.h>

int main(void)
{	
	while(1)
	{
		int sum = 0;
		int A = 0;
		for (int i = 0; i < 5; i++)
		{
			printf("���� �Է��ϼ���: ");
			scanf_s("%d", &A);
			sum += A;
		}
		//printf("%d", sum);
		if (sum % 5 == 3)
		{
			printf("�������� DNA�� ��ġ�� ��, Suspect\n\n");
			break;
		}
		else
		{
			printf("Citizen\n\n");
		}
	} 
}