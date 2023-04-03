#include "main.h"

/**
 * _memcpy - copies from src to dest
 * @dest: pointer to the destination array
 * @src: pointer to the data for copying
 * @n: the number of bytes to copy
 * Return: pointer to the destination char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (!dest || !src)
		return (NULL);

	while (n--)
		*(dest + n) = *(src + n);

	return (dest);
}
