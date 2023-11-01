#include<stdio.h>

int main(void)
{	
	while(1)
	{
		int sum = 0;
		int A = 0;
		for (int i = 0; i < 5; i++)
		{
			printf("숫자 입력하세요: ");
			scanf_s("%d", &A);
			sum += A;
		}
		//printf("%d", sum);
		if (sum % 5 == 3)
		{
			printf("범죄자의 DNA와 일치함 즉, Suspect\n\n");
			break;
		}
		else
		{
			printf("Citizen\n\n");
		}
	} 
}