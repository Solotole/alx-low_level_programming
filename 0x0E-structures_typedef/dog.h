#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
 * struct dog - structure with structure name dog
 * @name: first member-dog's name
 * @age: second member-dog's age
 * @owner: third member-dog's owner
 *
 * Description: structure dog with 3 members-name, age, and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
