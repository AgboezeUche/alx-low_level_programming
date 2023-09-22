#include "main.h"
/**
 * reverse_array - reverse array of integerrs
 * @a: the array
 * @n: thee number of elements of an array
 * Return: return void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
