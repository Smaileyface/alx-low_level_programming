#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: always 0 (success)
 */
int _strlen(char *s)
{
	int i = 0;


	while (*s != '\0')
	{
		i++;
		s++;
	}


	return (i);
}
