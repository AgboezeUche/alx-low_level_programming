#include "main.h"
/**
 * _abs - function that finds the  absolute vaalue of a number
 * @a: the function parameter
 * Return: returns -a or a
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
