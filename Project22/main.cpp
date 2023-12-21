#include <stdio.h>
#include <string.h>
void swap(const char* data_type, void* number1, void* number2);

int main(void)
{

	int first_age, second_age;
	double first_height, second_height;  // first는 첫번째 사람을 나타내며, second는 두번째 사람을 의미

	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf_s("%d %lf", &first_age, &first_height);

	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf_s("%d %lf", &second_age, &second_height);

	swap("int", &first_age, &second_age);
	swap("double", &first_height, &second_height);

	printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", first_age, first_height);
	printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", second_age, second_height);

	return 0;
}

void swap(const char* data_type, void* number1, void* number2)
{
	if (strcmp(data_type, "int") == 0)                                        //strcmp 함수는 문자열을 비교하는 데 사용되어 제공된 데이터 유형에 따라 올바른 분기가 수행되는지 확인
	{
		int temp;

		temp = *(int*)number1;
		*(int*)number1 = *(int*)number2;
		*(int*)number2 = temp;
	}           // *(int*)number1 -> (int*)number1으로 void* number1을 int* number1로 swap하며 이때 *을 앞에 붙여 포인터를 이용

	else if (strcmp(data_type, "double") == 0)
	{
		double temp = *(double*)number1;

		*(double*)number1 = *(double*)number2;
		*(double*)number2 = temp;
	}
}