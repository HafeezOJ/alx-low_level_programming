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

/**
 *dog_t - type dog
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
