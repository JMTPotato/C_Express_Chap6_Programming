#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int time, age, pay;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����): ");
	scanf("%d %d", &time, &age);
	
	if (time < 17)	//���� 5�� ����
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
	else if (time >= 17)	//���� 5�� ����
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
		printf("����� �����Դϴ�.");
	}
	else
	{
		printf("����� %d�Դϴ�.", pay);
	}

	return 0;
}