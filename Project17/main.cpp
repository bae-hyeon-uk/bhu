#include <stdio.h>
double CM_to_M(int cm); //함수 선언
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
	meter = cm / 100.0;    //m값은 cm값를 100으로 나누어준 값임
	return meter;
}