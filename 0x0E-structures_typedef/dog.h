#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
