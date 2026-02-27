#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 *
 * Description: uses putchar twice and an int variable
 * to print numbers from 0 to 9 followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		/* تحويل الرقم الصحيح إلى رمز الحرف المقابل له في ASCII */
		putchar(num + '0');
	}

	putchar('\n');

	return (0);
}
