#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog basic info
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototype - This MUST be here */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
