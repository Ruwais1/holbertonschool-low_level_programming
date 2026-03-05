#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			/* حلقة طباعة المسافات */
			for (j = 0; j < (size - i); j++)
			{
				_putchar(' ');
			}
			/* حلقة طباعة الرموز */
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
