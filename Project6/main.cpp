#include <stdio.h>

int main(void)
{

	//roll/pitch/yaw �������� o/p/y ���������� ����(r�� ���� ������ ���� o�� ����)
	double o;
	double p;
	double y;

	printf("o�������� �Է�: ");
	scanf_s("%lf", &o);
	printf("p�������� �Է�: ");
	scanf_s("%lf", &p);
	printf("y�������� �Է�: ");
	scanf_s("%lf", &y);

	//o/p/y���� ���� �Է��Ѵ�.
	while (o < -180)
		o += 360;
	while (o > +180)
		o -= 360;

	while (p < -180)
		y += 360;
	while (p > +180)
		y -= 360;

	while (y < -180)
		y += 360;
	while (y > +180)
		y -= 360;              //r,p,y ���� 180�� �ʰ��� 360���� ���ְ�, -180�� �̸��̸� 360���� �����ش�.


	printf("roll angle: %.2lf\n", o);
	printf("pitch angle: %.2lf\n", p);
	printf("yaw angle: %.2lf\n", y);

	return 0;

}