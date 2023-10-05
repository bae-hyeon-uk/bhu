#include <stdio.h>

int main() {
	int MONTH = 0;

	printf("해당 월을 입력하세요.");
	scanf_s("%d", &MONTH);

	if (MONTH < 1) 
		printf("해당 되는 계절이 없습니다.");       //0월은 1~12월안에 포함되지 않으므로 해당 계절이 없다는 것을 출력.
	
	else if (MONTH < 2)
		printf("겨울입니다.");

	else if (MONTH < 5)
		printf("봄입니다.");

	else if (MONTH < 9)
		printf("여름입니다.");

	else if (MONTH < 11)
		printf("가을입니다.");
	
	else if (MONTH < 13)
		printf("겨울입니다.");
	
	else 
		printf("해당되는 계절이 없습니다.");
	
	
	
	return 0;
}
