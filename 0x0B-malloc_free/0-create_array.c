#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars, and initialize with specific char
 * @size: the size of an array
 * @c: the specific char
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if error
 **/
char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
