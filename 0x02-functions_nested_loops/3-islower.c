#include "main.h"
/**
 * _islower - checks s  forr lower case chharacactctters
 * @c: parameter of interest
 * Return: returns 1 0r 0
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
