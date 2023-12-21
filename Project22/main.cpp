#include <stdio.h>
#include <string.h>
void swap(const char* data_type, void* number1, void* number2);

int main(void)
{

	int first_age, second_age;
	double first_height, second_height;  // first�� ù��° ����� ��Ÿ����, second�� �ι�° ����� �ǹ�

	printf("ù ��° ����� ���̿� Ű �Է� : ");
	scanf_s("%d %lf", &first_age, &first_height);

	printf("�� ��° ����� ���̿� Ű �Է� : ");
	scanf_s("%d %lf", &second_age, &second_height);

	swap("int", &first_age, &second_age);
	swap("double", &first_height, &second_height);

	printf("ù ��° ����� ���̿� Ű : %d, %.1lf\n", first_age, first_height);
	printf("�� ��° ����� ���̿� Ű : %d, %.1lf\n", second_age, second_height);

	return 0;
}

void swap(const char* data_type, void* number1, void* number2)
{
	if (strcmp(data_type, "int") == 0)                                        //strcmp �Լ��� ���ڿ��� ���ϴ� �� ���Ǿ� ������ ������ ������ ���� �ùٸ� �бⰡ ����Ǵ��� Ȯ��
	{
		int temp;

		temp = *(int*)number1;
		*(int*)number1 = *(int*)number2;
		*(int*)number2 = temp;
	}           // *(int*)number1 -> (int*)number1���� void* number1�� int* number1�� swap�ϸ� �̶� *�� �տ� �ٿ� �����͸� �̿�

	else if (strcmp(data_type, "double") == 0)
	{
		double temp = *(double*)number1;

		*(double*)number1 = *(double*)number2;
		*(double*)number2 = temp;
	}
}