#include <stdio.h>



int add(int x, int y)   //������ �ǹ�
{
	return x + y;
}

int sub(int x, int y)   //���⸦ �ǹ�
{
	return x - y;
}

int mul(int x, int y)  //���ϱ⸦ �ǹ�
{
	return x * y;
}

int div(int x, int y) //�����⸦ �ǹ�
{
	if (y == 0)
	{
		printf_s("0���� ���� �� �����ϴ�.");   //0���� ���� �� ����
	return 0;
	}
	return x / y;
}

int main()

 {
	int x, y;

	printf("���� �Է�(����)�ϼ���: ");
	scanf_s("%d,%d", &x, &y);     //(����,������ �Է��� �޾� ����

	printf("����: %d + %d = %d\n", x, y, add(x, y));
	printf("����: %d - %d = %d\n", x, y, sub(x, y));
	printf("����: %d / %d = %d\n", x, y, mul(x, y));
	printf("����: %d + %d = %d\n", x, y, div(x, y));
 }