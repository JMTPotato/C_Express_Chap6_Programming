#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, result;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &y);

	result = x % y;

	if (result == 0)
	{
		printf("����Դϴ�.");
	}
	else
	{
		printf("����� �ƴմϴ�.");
	}

	return 0;
}