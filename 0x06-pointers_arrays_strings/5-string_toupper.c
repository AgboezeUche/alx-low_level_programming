#include "main.h"
/**
 * string_toupper - it  changes all lowercase to uppercase
 * @n: the pointer
 * Return: returns n
 */
char *string_toupper(char *n)
{
	int i;
	i = 0;

	while (n[i] i= '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}