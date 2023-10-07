#include<stdio.h>


int main(void) 
{

	int year, month, day;
	//단 year, month, day는 출생 년,월,일을 의미
	int total, lastnumber;
	printf("생년월일 입력: ");
	scanf_s("%d", &year);
	printf("월 입력 : ");
	scanf_s("%d", &month);
	printf("일 입력: ");
	scanf_s("%d", &day);

	total = year - month + day;
	lastnumber = total % 10;
	//마지막 숫자가 10으로 나누었을때 나머지가 0인 것을 의미

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

