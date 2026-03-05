#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	/* التعامل مع الأرقام السالبة */
	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
	{
		n1 = n;
	}

	/* الاستدعاء الذاتي للوصول لأول خانة من اليسار */
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	/* طباعة الخانة الأخيرة (الآحاد) */
	_putchar((n1 % 10) + '0');
}
