#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int key, weight, nweight = 0;

	printf("키와 체중을 입력하세요: ");
	scanf("%d %d", &key, &weight);

	nweight = (key - 100) * 0.9;

	if (weight > nweight)
	{
		printf("과체중입니다.");
	}
	else if (weight = nweight)
	{
		printf("표준입니다.");ㄴ
	else
	{
		printf("저체중입니다.");
	}

	return 0;
}