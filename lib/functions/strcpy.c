#include "main.h"

/**
 *_strcpy - print values of int.
 *@src: is pointer value
 *@dest: value retur data
 *Return: dest value
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
