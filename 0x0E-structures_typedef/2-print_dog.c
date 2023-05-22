#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print a struct dog
 * @d: struct dog to print
 */
void orint_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nowner: %s\n", d->name, d->age, d->owner);
}
