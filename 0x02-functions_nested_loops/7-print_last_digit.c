#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 * Description:  prints the last digit of a number.
 *
 * Return: returns an integer
 */
int print_last_digit(int x)
{
	int last = x % 10;

	if (last < 0)
	{
		last = -last;
	}
	_putchar('0' + last);
	return (last);
}
