#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int key, age;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf("%d", &key);

	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%d", &age);

	if (key >= 140 && age >= 10)
	{
		printf("Ÿ�� �����ϴ�.");
	}
	else
	{
		printf("�˼��մϴ�.");
	}
	return 0;
}