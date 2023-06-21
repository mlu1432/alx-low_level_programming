#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - The initialization of a dog-struct variable
 * @d: Initializes struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
