#include <stdio.h>

/**
 * main - prints alphabet in lowercase then uppercase
 *
 * Description: uses three putchar calls to print a-z, A-Z,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* 1. طباعة الحروف الصغيرة */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* 2. طباعة الحروف الكبيرة */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	/* 3. طباعة السطر الجديد */
	putchar('\n');

	return (0);
}
