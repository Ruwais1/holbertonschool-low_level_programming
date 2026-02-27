#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Description: uses a for loop to print numbers from 0 to 9
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* حلقة تبدأ من 0 وتنتهي عند 9 */
	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	/* طباعة سطر جديد بعد انتهاء الأرقام */
	printf("\n");

	return (0);
}
