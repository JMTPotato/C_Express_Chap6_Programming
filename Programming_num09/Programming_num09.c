#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;

	printf("x의 값을 입력하시오: ");
	scanf("%lf", &x);

	if (x <= 0)
	{
		printf("%lf", x * x - 9 * x + 2);
	}
	else if (x > 0)
	{
		printf("%lf",7 * x + 2);
	}
	return 0;
}