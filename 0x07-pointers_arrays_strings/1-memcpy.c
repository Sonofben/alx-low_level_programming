#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: Destination memory area where data will be copied to.
 * @src: Source memory area from which data will be copied.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int dest_index;

	for (dest_index = 0; dest_index < n; dest_index++)
	{
		dest[dest_index] = src[dest_index];
	}

	return dest;
}
