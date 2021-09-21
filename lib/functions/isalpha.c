#include "main.h"

/**
*  _isalpha - checks for alphabetic character
* @c: variable to check
* Return: 1 if c is lowercase, 0 otherwise
*/

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
