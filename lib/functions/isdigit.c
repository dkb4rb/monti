#include "main.h"
/**
 *_isdigit -  function that checks for a digit (0 through 9).
 *@c:This variable output.
 * Return: if is a number return 1 of other case return 0.
 */

int _isdigit(int c)
{
    if (c <= 57 && c >= 48)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
