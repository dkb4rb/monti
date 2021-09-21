#include "main.h"
#include <stdio.h>

/**
* _puts - function that returns the length of a string of str.
*@str: pointer value
*Return: c value
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
