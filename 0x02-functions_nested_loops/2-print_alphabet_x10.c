#include "main.h"
#include <stdlib.h>

/**
 * print_alphabet - prints lowercase letters
 * Description: function that prints the alphabet in lowercase and by new line
 *
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int x10;
	char alpha;

	for (x10 = 1; x10 <= 10; x10++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
