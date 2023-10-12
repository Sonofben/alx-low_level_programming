#include "main.h"
#include <stdlib.h>

/**
 * print_sign - checks for negative and positive numbers
 * @n: function parameter
 * Description: a function that prints the sign of a number.
 *
 * Return: 1 or 0 for positive values, 0 otherwise
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (n == 0)
    {
        _putchar(n + '0');
        return (0);
    }
    else
    {
        _putchar('-');
        return (-1);
    }
}
