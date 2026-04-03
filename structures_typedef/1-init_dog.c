#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: name to assign
 * @age: age to assign
 * @owner: owner to assign
 *
 * Description: Assigns values to the members of a struct dog
 *              through a pointer. Does nothing if d is NULL.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}
