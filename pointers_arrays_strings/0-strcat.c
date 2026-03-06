#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* 1. الوصول لنهاية النص الأول (dest) */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* 2. نسخ n حرف من src أو التوقف إذا وصلنا لنهاية src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* 3. إضافة علامة النهاية */
	dest[i] = '\0';

	return (dest);
}
