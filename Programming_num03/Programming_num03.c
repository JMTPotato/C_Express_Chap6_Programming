#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, z;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x < y && x < z)
	{
		printf("���� ���� ������ %d�Դϴ�.", x);
	}
	else if (y < x && y < z)
	{
		printf("���� ���� ������ %d�Դϴ�.", y);
	}
	else
	{
		printf("���� ���� ������ %d�Դϴ�.", z);
	}

	return 0;
}