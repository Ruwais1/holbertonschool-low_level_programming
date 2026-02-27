#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* استخراج الرقم الأخير */
	last = n % 10;

	/* طباعة الجزء الأول الثابت من الجملة */
	printf("Last digit of %d is %d ", n, last);

	/* اختبار الشروط لطباعة الجزء المتبقي */
	if (last > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
