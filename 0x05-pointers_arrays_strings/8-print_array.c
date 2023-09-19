#include "main.h"
/**
 * print_array - this  prints n elements of  an array
 * @a: array used
 * @n: the number of element printed
 * Return: returns void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
