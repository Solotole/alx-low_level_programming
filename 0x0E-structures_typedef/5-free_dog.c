#include "dog.h"
/**
 * free_dog - function to free a dog
 * @d: pointer to the dog to be freed
 *
 * Return: return void
 */
void free_dog(dog_t *d)
{
	dog_t *ptr = d;

	if (ptr == NULL)
		retun;
	free(ptr->name);
	free(ptr->owner);
	free(ptr);
}
