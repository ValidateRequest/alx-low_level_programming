#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allicated for a struct dog
 * @d: struct dog ti free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
