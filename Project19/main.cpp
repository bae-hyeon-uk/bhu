#include <stdio.h>

void swap(double *pa, double *pb);                    // �� �Ǽ��� �ٲٴ� �Լ�
void line_up(double *maxp, double *midp, double *minp);    //�Լ�����

int main(void)
{
	double max, mid, min;     //max�� ���� ū ��, mid�� �߰���, min�� ���� ���� ��

	printf("�Ǽ��� 3�� �Է� : ");
	scanf_s("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);     //�� ���� �� �����ϴ� �Լ�
	printf_s("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

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
	if (*maxp < *midp) swap(maxp, midp); //max�� mid���� ������ �ڸ� �ٲ�
	if (*maxp < *minp) swap(maxp, minp); //max�� min���� ������ �ڸ� �ٲ�
	if (*midp < *minp) swap(midp, minp); //mid�� min���� ������ �ڸ� �ٲ�
}