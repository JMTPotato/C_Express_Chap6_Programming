#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, age, pay;

	printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
	scanf("%d %d", &time, &age);
	
	if (time < 17)	//오후 5시 이전
	{
		if (age > 12 && age < 65)
		{
			pay = 34000;
		}
		else if (age >= 3 && age <= 12)
		{
			pay = 25000;
		}
		else if (age >= 65)
		{
			pay = 25000;
		}
		else
		{
			pay = 0;
		}
	}
	else if (time >= 17)	//오후 5시 이후
	{
		if (age >= 3)
		{
			pay = 10000;
		}
		else
		{
			pay = 0;
		}
	}
	if (pay == 0)
	{
		printf("요금은 무료입니다.");
	}
	else
	{
		printf("요금은 %d입니다.", pay);
	}

	return 0;
}