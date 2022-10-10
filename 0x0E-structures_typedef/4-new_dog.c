#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - creates a new dog
 * @name: 1st member.
 * @age: 2nd member.
 * @owner: 3rd member.
 *
 * Return: NULL if fail.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lenN, lenO;

	struct dog *new_dog = NULL;

	lenN = 0;
	while (name[lenN] != '\0')
		lenN++;
	lenO = 0;
	while (owner[lenO] != '\0')
		lenO++;

	n_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	n_dog->name = malloc(lenN + 1);
	if (new_dog == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	n_dog->owner = malloc(lenO + 1);
	if (new_dog == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i == 0; i <= lenN; i++)
	new_dog->name[i] = name[i];
	for (i == 0; i <= lenO; i++)
	new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
