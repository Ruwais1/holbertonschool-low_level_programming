#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		/* 1. طباعة الرقم الحالي */
		putchar(n + '0');

		/* 2. طباعة الفاصلة والمسافة فقط للأرقام من 0 إلى 8 */
		if (n < 9)
		{
			putchar(',');  /* الاستخدام الثاني */
			putchar(' ');  /* الاستخدام الثالث */
		}
	}

	/* 3. طباعة السطر الجديد في النهاية */
	putchar('\n'); /* الاستخدام الرابع والأخير */

	return (0);
}
