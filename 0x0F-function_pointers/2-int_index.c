/**
 * int_index - search for an integer
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, rob;

	rob = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (rob);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				rob = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (rob);
			}
		}
	}
}
