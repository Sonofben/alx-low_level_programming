#include "main.h"

/**
 * print_triangle - Prints a triangle of size n with '#' in the terminal
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col <= size - row - 2; col++)
		{
			_putchar(' ');
		}
		for (col = size - row - 1; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
