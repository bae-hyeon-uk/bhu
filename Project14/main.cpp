#include<stdio.h>

int main(void)
{
	int A, B, C, D, E;
	int SUM;
	printf("숫자 5개(A,B,C,D,E)를 각각 입력하세요: ");
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
			printf("범죄자의 DNA와 일치함 즉, Suspect");
		}
		else
		{
			printf("Citizen");
		}
}