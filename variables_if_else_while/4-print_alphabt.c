#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Description: uses putchar twice to print a-z excluding q and e,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		/* التحقق من أن الحرف ليس 'e' وليس 'q' */
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter); /* الاستخدام الأول */
		}
	}

	putchar('\n'); /* الاستخدام الثاني */

	return (0);
}
