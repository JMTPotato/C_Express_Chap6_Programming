#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//rand() �Լ� ���� ���̺귯��

int main()
{
	int select, random;

	printf("�����Ͻÿ�(1: ���� 2: ���� 3: ��)");
	scanf("%d", &select);

	random = rand() % 3 + 1;	// 1~3������ ������ ����

	if (select == 1)
	{
		if (random ==1)
		{
			printf("�����ϴ�");
		}
		else if (random == 2)
		{
			printf("�����ϴ�");
		}
		else if (random == 3)
		{
			printf("�̰���ϴ�");
		}
	}
	if (select == 2)
	{
		if (random == 1)
		{
			printf("�̰���ϴ�");
		}
		else if (random == 2)
		{
			printf("�����ϴ�");
		}
		else if (random == 3)
		{
			printf("�����ϴ�");
		}
	}
	if (select == 3)
	{
		if (random == 1)
		{
			printf("�����ϴ�");
		}
		else if (random == 2)
		{
			printf("�̰���ϴ�");
		}
		else if (random == 3)
		{
			printf("�����ϴ�");
		}
	}
	return 0;
}