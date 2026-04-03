#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct for dog information
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: Structure that stores name, age and owner of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
