#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
<<<<<<< HEAD

=======
>>>>>>> d6595faba97ef31d7d73cf57ae001f96e9344206
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *rob;
	unsigned long int j;

	rob = malloc(sizeof(hash_table_t));
	if (rob == NULL)
		return (NULL);

	rob->size = size;
	rob->array = malloc(sizeof(hash_node_t *) * size);
	if (rob->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
<<<<<<< HEAD
	rob->array[i] = NULL;
=======
		rob->array[i] = NULL;
>>>>>>> d6595faba97ef31d7d73cf57ae001f96e9344206

	return (rob);
}
