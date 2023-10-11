#include "main.h"
#include <stdlib.h>

/**
 * _islower - checks for lowercase
 * @c: function parameter
 * Description:  a function that checks for lowercase character.
 *
 * Return: 1 for lowercase, 0 otherwise;
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
