#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Description: uses a loop and putchar to print a-z
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* الاستخدام الأول لـ putchar داخل الحلقة */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* الاستخدام الثاني لـ putchar للسطر الجديد */
	putchar('\n');

	return (0);
}
