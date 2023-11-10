#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum a variable number of integers.
 * @n: The number of integers to sum.
 *
 * Description: This function takes a variable number of integer arguments
 * and returns their sum. It uses the first argument 'n' to determine how
 * many integers will be passed.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list(valz);
	va_start(valz, n);
	if (n == 0)
	{
		return (0);
		va_end(valz);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(valz, int);
	}
	va_end(valz);
	return (sum);
}
