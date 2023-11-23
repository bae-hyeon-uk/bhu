#include <stdio.h>

void swap(double *pa, double *pb);                    // 두 실수를 바꾸는 함수
void line_up(double *maxp, double *midp, double *minp);    //함수선언

int main(void)
{
	double max, mid, min;     //max는 가장 큰 값, mid는 중간값, min는 가장 작은 값

	printf("실수값 3개 입력 : ");
	scanf_s("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);     //세 변수 값 정렬하는 함수
	printf_s("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *midp) swap(maxp, midp); //max가 mid보다 작으면 자리 바꿈
	if (*maxp < *minp) swap(maxp, minp); //max가 min보다 작으면 자리 바꿈
	if (*midp < *minp) swap(midp, minp); //mid가 min보다 작으면 자리 바꿈
}