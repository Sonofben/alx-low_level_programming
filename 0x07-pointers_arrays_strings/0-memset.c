#include "main.h"

/**
 * *_memset -  fills memory with a constant byte.
 * @s: first parameter a pointer to s
 * @b: second parameter a char.
 * @n: third parameter an int.
 *
 * Return: Pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
