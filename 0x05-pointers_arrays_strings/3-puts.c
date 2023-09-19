#include "main.h"
/**
 * _puts - function that prints striing of characterrss
 * @str: the string to be printed
 * Return: returns void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
