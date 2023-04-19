#include "function_pointers.h"
/**
 * int_index - returns index
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function for comparing values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (1 = 0; < size; i++)
	{
		if(cmp(array[i]))
			return (i);
	}
}
