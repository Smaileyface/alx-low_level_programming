#include "main.h"
/**
 * _memcpy - a function to copy memory area
 * @dest: memory where function is stored
 * @src: memory where function is copied
 * @n: the number of bytes of the function
 *
 * Return: copied memory and change in bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;
	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
