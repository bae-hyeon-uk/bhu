#include <stdio.h>

int main() {
	int year;

	printf("임의의 연도를 입력하세요: ");
	scanf_s("%d", &year);
	
	//윤년의 구별법은 연도가 4로 나누어지고 100으로 나누어지지 않는다면 윤년이며, 400으로 나누어지면 윤년임.  
	
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {                  
		printf(" % d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 윤년에 해당되지 않습니다.\n", year);
	}

	return 0;
}