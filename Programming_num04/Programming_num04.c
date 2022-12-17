#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		//rand() 함수 포함 라이브러리

int main()
{
	int select, random;

	printf("선택하시오(1: 가위 2: 바위 3: 보)");
	scanf("%d", &select);

	random = rand() % 3 + 1;	// 1~3사이의 랜덤한 숫자

	if (select == 1)
	{
		if (random ==1)
		{
			printf("비겼습니다");
		}
		else if (random == 2)
		{
			printf("졌습니다");
		}
		else if (random == 3)
		{
			printf("이겼습니다");
		}
	}
	if (select == 2)
	{
		if (random == 1)
		{
			printf("이겼습니다");
		}
		else if (random == 2)
		{
			printf("비겼습니다");
		}
		else if (random == 3)
		{
			printf("졌습니다");
		}
	}
	if (select == 3)
	{
		if (random == 1)
		{
			printf("졌습니다");
		}
		else if (random == 2)
		{
			printf("이겼습니다");
		}
		else if (random == 3)
		{
			printf("비겼습니다");
		}
	}
	return 0;
}