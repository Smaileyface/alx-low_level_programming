#include "main.h"
/**
 * _strchr - search for character in a string
 * @s: string pointer
 * @c: character to be searched
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
