#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char x;

	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%ch", &x);

	switch (x)
	{
	case 'a' :
		printf("�����Դϴ�.");
		break;
	case 'e':
		printf("�����Դϴ�.");
		break;
	case 'i':
		printf("�����Դϴ�.");
		break;
	case 'o':
		printf("�����Դϴ�.");
		break;
	case 'u':
		printf("�����Դϴ�.");
		break;
	default:
		printf("�����Դϴ�.");
		break;
	}

	return 0;
}