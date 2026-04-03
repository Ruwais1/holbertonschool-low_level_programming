#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog to print
 *
 * Description: If an element of d is NULL, prints (nil).
 * If d is NULL, prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/* Check name */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* Print age (float doesn't need NULL check) */
	printf("Age: %f\n", d->age);

	/* Check owner */
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
