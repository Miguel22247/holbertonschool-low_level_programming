#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - dog free
 * @d: dog
*/

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
