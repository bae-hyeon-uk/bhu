#include <stdio.h>

int main(void)
{

	//roll/pitch/yaw 각도값은 o/p/y 각도값으로 설정(r은 변수 오류가 나서 o로 수정)
	double o;
	double p;
	double y;

	printf("o각도값을 입력: ");
	scanf_s("%lf", &o);
	printf("p각도값을 입력: ");
	scanf_s("%lf", &p);
	printf("y각도값을 입력: ");
	scanf_s("%lf", &y);

	//o/p/y각도 값을 입력한다.
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
		y -= 360;              //r,p,y 값이 180도 초과면 360도를 빼주고, -180도 미만이면 360도를 더해준다.


	printf("roll angle: %.2lf\n", o);
	printf("pitch angle: %.2lf\n", p);
	printf("yaw angle: %.2lf\n", y);

	return 0;

}