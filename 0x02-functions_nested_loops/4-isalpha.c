#include "main.h"
#include <stdlib.h>

/**
 * _isalpha - checks for alphabets
 * @c: function parameter
 * Description:  a function that checks for alphabetic character.
 *
 * Return: 1 for alphabet, 0 otherwise;
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
