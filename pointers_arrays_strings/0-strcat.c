#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* العثور على نهاية النص dest */
	while (dest[i] != '\0')
		i++;

	/* نسخ حروف src إلى نهاية dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* إضافة علامة النهاية */
	dest[i] = '\0';

	return (dest);
}
