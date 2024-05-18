#include "dog.h"
/**
 * new_dog - function responsible for creating new dog
 * @name: name of the created dog
 * @age: age of the newly created dog
 * @owner: owner of the newly created dog
 *
 * Return: return pointer to the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	newdog = malloc(sizeof(dog_t) * 1);
	if (newdog == NULL)
		return (NULL);
	newdog->name = strdup(name);
	if(newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	newdog->owner = strdup(owner);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
