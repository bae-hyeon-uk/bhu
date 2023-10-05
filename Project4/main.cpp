#include<stdio.h>
#define	S_size 90  
int main(void) 
{
	int chest;
	char size;
	printf("가슴둘레를 입력하세요:");
	scanf_s("%d", &chest);
	if (chest <= 90)
	{
		size = 'S';
	}
	else if ((chest > 90) && (chest <= 100))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("사이즈는 %c", size);
	return 0;
}
    