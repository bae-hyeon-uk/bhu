#include<stdio.h>


int main(void) 
{

	int year, month, day;
	//�� year, month, day�� ��� ��,��,���� �ǹ�
	int total, lastnumber;
	printf("������� �Է�: ");
	scanf_s("%d", &year);
	printf("�� �Է� : ");
	scanf_s("%d", &month);
	printf("�� �Է�: ");
	scanf_s("%d", &day);

	total = year - month + day;
	lastnumber = total % 10;
	//������ ���ڰ� 10���� ���������� �������� 0�� ���� �ǹ�

	if (lastnumber == 0)
	{
		printf("very good\n");
	}
	else
	{
		printf("soso\n");
	}

	return 0;
}

