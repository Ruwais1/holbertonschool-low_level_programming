#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to check
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog (Success), NULL (Fail)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len_name, len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* 1. Allocate memory for the dog struct */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* 2. Allocate memory and copy name */
	len_name = _strlen(name);
	d->name = malloc(sizeof(char) * (len_name + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);

	/* 3. Allocate memory and copy owner */
	len_owner = _strlen(owner);
	d->owner = malloc(sizeof(char) * (len_owner + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);

	/* 4. Set age */
	d->age = age;

	return (d);
}
