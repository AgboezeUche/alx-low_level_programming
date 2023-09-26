#include "main.h"
/**
 * _memcpy - the function that copies memory
 * @dest: destination
 * @src: the source
 * @n: input
 * Return: returns  0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
