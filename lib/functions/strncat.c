#include "main.h"

/**
 *_strncat - align two values in one line of text
 *@src: this is value with contain to strings
 *@n: this is value with contain values of comparison.
 *@dest: this is value of return one char
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, m;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}

	for (m = 0; src[m] != '\0';)
	{
		m++;
	}

	for (j = 0; j < n; j++)
	{
		if (j < m)
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}
	return (dest);
}