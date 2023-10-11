#include "main.h"
#include <stdlib.h>

/**
 * print_alphabet - prints lowercase letters
 * Description: function that prints the alphabet in lowercase and by new line
 *
 * Return: returns void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
