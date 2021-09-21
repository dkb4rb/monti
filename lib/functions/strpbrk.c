#include "main.h"

/**
 * _strpbrk -Searching string
 * @s: The String.
 * @accept: pointer value.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
