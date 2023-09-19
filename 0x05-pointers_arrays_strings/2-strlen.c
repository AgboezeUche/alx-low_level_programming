#include "main.h"
/**
 * _strlen - finds the string length
 * @s: parameter to bee counted
 * Return: returns length of string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0';)
		count++;
			return (count);
}
