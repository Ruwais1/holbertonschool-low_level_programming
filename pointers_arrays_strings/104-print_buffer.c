#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int offset, i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (offset = 0; offset < size; offset += 10)
	{
		/* 1. طباعة العنوان */
		printf("%08x: ", offset);

		/* 2. طباعة الـ Hex (بايتين بايتين) */
		for (i = 0; i < 10; i++)
		{
			if ((i + offset) < size)
				printf("%02x", b[offset + i]);
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}

		/* 3. طباعة الحروف القابلة للقراءة */
		for (j = 0; j < 10; j++)
		{
			if ((j + offset) < size)
			{
				if (b[offset + j] >= 32 && b[offset + j] <= 126)
					printf("%c", b[offset + j]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
