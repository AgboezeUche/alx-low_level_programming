#include "main.h"
/**
 * _strncat - this cocatenates two strings
 * @dest: destinaatioon string
 * @src: the soouurrce string
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
}
