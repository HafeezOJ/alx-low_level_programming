#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a doc structure
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog;

#endif
