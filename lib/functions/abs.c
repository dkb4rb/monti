#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @r: variable to check
 * Return: the absolute value Return r
 */

int _abs(int r)
{
    if (r > 0)
    {
        return (r);
    }
    else
    {
        r = (r * (-1));
        return (r);
    }
}
