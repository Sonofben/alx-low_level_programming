#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - Print a variable number of integers with a separator.
 * @separator: The string used to separate the numbers
 * @n: The number of integers to print.
 * @...: The variable number of integer arguments to print.
 *
 * Description: This function takes a variable number of integer arguments
 * prints them to the standard output, separated by the specified separato
 * at the end of the printed numbers.
 *
 * Return: None (void).
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int v;

	va_list(numz);
	va_start(numz, n);

	for (v = 0; v < n; v++)
	{
		if (separator == NULL)
		{
			printf("%d\n", va_arg(numz, int));
		}
		else
		{
			printf("%d%s", va_arg(numz, int), separator);
		}
	}
	printf("\n");
	va_end(numz);
}
