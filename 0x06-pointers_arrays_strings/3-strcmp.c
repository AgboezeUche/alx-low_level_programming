#include "main.h"
/**
 * _strcmp - compares strriing
 * @s1: 1st parameter
 * @s2: 2nd parametter
 * Return: returns int
 */
int strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s2[i] < s1[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
