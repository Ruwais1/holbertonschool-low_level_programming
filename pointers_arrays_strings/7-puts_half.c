#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, n, i;

	/* 1. حساب طول النص */
	while (str[len] != '\0')
		len++;

	/* 2. تحديد نقطة البداية */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	/* 3. طباعة النصف الثاني */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
