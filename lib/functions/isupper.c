#include "main.h"

/**
 *_isupper - Searching value uppercase.
 * @c: This variable output.
 * Return: if is uppercase return 1 of other case return 0.
 */

int _isupper(int c)
{
    if (c >= 'A' && c <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
