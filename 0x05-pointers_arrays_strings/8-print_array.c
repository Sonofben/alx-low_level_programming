#include "main.h"
/**
 * print_array - Prints the first n elements of an array.
 * @a: The name of the array.
 * @n: The number of elements to be printed.
 *
 * Description: This function takes an array 'a' and the number of elements 'n'
 * as inputs and prints the first 'n' elements of the array.
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
