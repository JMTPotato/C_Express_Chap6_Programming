#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char x;

	printf("문자를 입력하시오: ");
	scanf("%ch", &x);

	switch (x)
	{
	case 'a' :
		printf("모음입니다.");
		break;
	case 'e':
		printf("모음입니다.");
		break;
	case 'i':
		printf("모음입니다.");
		break;
	case 'o':
		printf("모음입니다.");
		break;
	case 'u':
		printf("모음입니다.");
		break;
	default:
		printf("자음입니다.");
		break;
	}

	return 0;
}