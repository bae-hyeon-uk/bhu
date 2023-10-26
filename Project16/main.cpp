#include <stdio.h>



int add(int x, int y)   //덧셈을 의미
{
	return x + y;
}

int sub(int x, int y)   //빼기를 의미
{
	return x - y;
}

int mul(int x, int y)  //곱하기를 의미
{
	return x * y;
}

int div(int x, int y) //나누기를 의미
{
	if (y == 0)
	{
		printf_s("0으로 나눌 수 없습니다.");   //0으로 나눌 수 없음
	return 0;
	}
	return x / y;
}

int main()

 {
	int x, y;

	printf("숫자 입력(정수)하세요: ");
	scanf_s("%d,%d", &x, &y);     //(정수,정수로 입력을 받아 수행

	printf("덧셈: %d + %d = %d\n", x, y, add(x, y));
	printf("뺄셈: %d - %d = %d\n", x, y, sub(x, y));
	printf("곱셈: %d / %d = %d\n", x, y, mul(x, y));
	printf("덧셈: %d + %d = %d\n", x, y, div(x, y));
 }