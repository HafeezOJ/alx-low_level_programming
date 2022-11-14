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
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nill)]\n");

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nill)\n");

		if (d->owner)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nill)\n");
	}
	else
	{
		printf("(nill)");
	}
}
