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
	int i, j, k;

	newdog = malloc(sizeof(dog_t) * 1);
	if (newdog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	newdog->name = maloc(sizeof(char) * i);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->age = age;
	newdog->owner = malloc(sizeof(char) * j);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		newdog->name[k] = name[k];
	for (k = 0; k < j; k++)
		newdog->owner[k] = owner[k];
	return (newdog);
}
