#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first variable
 * @b: second  variable
 * Return: returns  void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
		*b = c;
}
