#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int key, age;

	printf("키를 입력하시오(cm): ");
	scanf("%d", &key);

	printf("나이를 입력하시오: ");
	scanf("%d", &age);

	if (key >= 140 && age >= 10)
	{
		printf("타도 좋습니다.");
	}
	else
	{
		printf("죄송합니다.");
	}
	return 0;
}