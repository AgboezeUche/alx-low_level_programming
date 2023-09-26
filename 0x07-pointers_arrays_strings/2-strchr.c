#include <stdio.h>
#include "main.h"
/**
 * _strchr - the entry point
 * @s: the input
 * @c: the input
 * Return: returns 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s+i);
	}
	return (NULL);
}
