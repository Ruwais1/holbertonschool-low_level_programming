#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	/* 1. حساب طول النص */
	while (s[i] != '\0')
	{
		i++;
	}

	/* 2. الطباعة من الخلف للأمام */
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
