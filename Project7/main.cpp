#include <stdio.h>

int main() {
	int MONTH = 0;

	printf("�ش� ���� �Է��ϼ���.");
	scanf_s("%d", &MONTH);

	if (MONTH < 1) 
		printf("�ش� �Ǵ� ������ �����ϴ�.");       //0���� 1~12���ȿ� ���Ե��� �����Ƿ� �ش� ������ ���ٴ� ���� ���.
	
	else if (MONTH < 2)
		printf("�ܿ��Դϴ�.");

	else if (MONTH < 5)
		printf("���Դϴ�.");

	else if (MONTH < 9)
		printf("�����Դϴ�.");

	else if (MONTH < 11)
		printf("�����Դϴ�.");
	
	else if (MONTH < 13)
		printf("�ܿ��Դϴ�.");
	
	else 
		printf("�ش�Ǵ� ������ �����ϴ�.");
	
	
	
	return 0;
}
