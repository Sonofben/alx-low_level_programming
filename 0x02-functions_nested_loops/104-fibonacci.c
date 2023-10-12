#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the first 98 Fibonacci numbers, separated by a comma and a space.
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long int a = 1, b = 2, c;
    int i;

    printf("%lu, %lu, ", a, b);
    for (i = 3; i <= 98; i++)
    {
        c = a + b;
        a = b;
        b = c;
        
        if (i < 98)
            printf("%lu, ", c);
        else
            printf("%lu\n", c);
    }

    return (0);
}
