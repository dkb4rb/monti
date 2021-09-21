#include "main.h"
#include <stdio.h>

/**
* _strstr - locate value of needle in to haystack
*@haystack: is string complet
*@needle: is value a search in to haystack
* Return: haystack
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;

			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}

	return ('\0');
}
