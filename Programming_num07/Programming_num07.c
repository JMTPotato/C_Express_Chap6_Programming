#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int key, weight, nweight = 0;

	printf("Ű�� ü���� �Է��ϼ���: ");
	scanf("%d %d", &key, &weight);

	nweight = (key - 100) * 0.9;

	if (weight > nweight)
	{
		printf("��ü���Դϴ�.");
	}
	else if (weight = nweight)
	{
		printf("ǥ���Դϴ�.");��
	else
	{
		printf("��ü���Դϴ�.");
	}

	return 0;
}