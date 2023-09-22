#include "main.h"
#include <stdio.h>
/**
 * rot13 - the encoder rot13
 * @s: pointer to the string parameter
 * Return: returns *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			s[1] = datarot[j];
			break;
		}
	}
return (s);
}
