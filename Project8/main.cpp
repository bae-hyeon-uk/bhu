#include <stdio.h>

int main() {
	int year;

	printf("������ ������ �Է��ϼ���: ");
	scanf_s("%d", &year);
	
	//������ �������� ������ 4�� ���������� 100���� ���������� �ʴ´ٸ� �����̸�, 400���� ���������� ������.  
	
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {                  
		printf(" % d���� �����Դϴ�.\n", year);
	}
	else {
		printf("%d���� ���⿡ �ش���� �ʽ��ϴ�.\n", year);
	}

	return 0;
}