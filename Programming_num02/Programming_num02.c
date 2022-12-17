#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, result;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	printf("정수를 입력하시오: ");
	scanf("%d", &y);

	result = x % y;

	if (result == 0)
	{
		printf("약수입니다.");
	}
	else
	{
		printf("약수가 아닙니다.");
	}

	return 0;
}