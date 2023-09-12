#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void	print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (!d->name) ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (!d->owner) ? "(nil)" : d->owner);
	}
}
