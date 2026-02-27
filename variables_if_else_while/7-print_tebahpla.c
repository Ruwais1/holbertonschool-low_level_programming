#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* حلقة تبدأ من z وتتناقص حتى تصل إلى a */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
