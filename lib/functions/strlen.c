#include "main.h"
#include <stdio.h>

/**
* _strlen - function that returns the length of a string.
*@s: pointer value
*Return: c value
*/

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
