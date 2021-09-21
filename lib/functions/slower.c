#include "main.h"

/**
* _islower - checks for lowercase character in a description
* @c: variable to check
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if ((c <= 122) && (c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
