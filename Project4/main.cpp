#include<stdio.h>
#define	S_size 90  
int main(void) 
{
	int chest;
	char size;
	printf("�����ѷ��� �Է��ϼ���:");
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

	printf("������� %c", size);
	return 0;
}
    