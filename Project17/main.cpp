#include <stdio.h>
double CM_to_M(int cm); //�Լ� ����
int main(void)
{
	double res;
	res = CM_to_M(187);
	printf("%.2lfm\n", res);

	return 0;
}

double CM_to_M(int cm)
{
	double meter;
	meter = cm / 100.0;    //m���� cm���� 100���� �������� ����
	return meter;
}