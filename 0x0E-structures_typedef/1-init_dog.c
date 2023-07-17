#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -initializes a structure of type dog
 * @d: pointer to structure dog to initialize
 * @name:pointer to the name of the dog to initialize
 * @age: age to initialize
 * @owner:pointer to the owner of the dog  to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
