#include<stdio.h>

int main(void)
{
	int A, B, C, D, E;
	int SUM;
	printf("���� 5��(A,B,C,D,E)�� ���� �Է��ϼ���: ");
	printf("A: ");
	scanf_s("%d", &A);
	printf("B: ");
	scanf_s("%d", &B);
	printf("C: ");
	scanf_s("%d", &C);
	printf("D: ");
	scanf_s("%d", &D);
	printf("E: ");
	scanf_s("%d", &E);
	SUM = A + B + C + D + E;
		if (SUM % 5 == 3)
		{
			printf("�������� DNA�� ��ġ�� ��, Suspect");
		}
		else
		{
			printf("Citizen");
		}
}