#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints properties of a dog
 *
 * @d: struct of type dog
 *
 * Description: print a dog properties
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nill\n)");
		else
			printf("Owner: %s\n", d->owner);
		printf("\n");
	}
	else
	{
		printf("(nill)\n");
	}
}
