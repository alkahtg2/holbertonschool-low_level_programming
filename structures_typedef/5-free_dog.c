#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a struct dog
 * @d: pointer to the struct dog
 *
 * Description: frees the memory allocated for a dog structure.
 * If d is NULL, nothing is done.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
