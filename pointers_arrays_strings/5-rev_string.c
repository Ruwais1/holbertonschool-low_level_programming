#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	/* 1. حساب طول النص */
	while (s[len] != '\0')
	{
		len++;
	}

	/* 2. تبديل الحروف (الأول مع الأخير، الثاني مع قبل الأخير...) */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
