#include <stdio.h>

int main(void)
{
	double weight, height, bmi;
	scanf_s("%lf%lf", &weight, &height);

	height = height / 100.0;
	bmi = weight / (height * height);

	((bmi >= 20.0) && (bmi < 25.0))
		? printf("It's the standard.\n")
		: printf("You need to lose weight.\n");

	return 0;
}