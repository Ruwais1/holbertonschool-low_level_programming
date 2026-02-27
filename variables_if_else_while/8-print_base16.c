#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	/* 1. طباعة الأرقام من 0 إلى 9 */
	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	/* 2. طباعة الحروف من a إلى f */
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	/* 3. طباعة السطر الجديد */
	putchar('\n');

	return (0);
}
