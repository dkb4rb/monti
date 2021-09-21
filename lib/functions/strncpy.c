#include "main.h"
#include <stdlib.h>

/**
 *_strncpy - convert two lines in one  char
 *@dest: value of a return
 *@src: value with contain string
 *@n: size of string
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, s_l = 0;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = s_l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
