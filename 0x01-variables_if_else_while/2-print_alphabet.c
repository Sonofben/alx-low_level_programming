#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'Z')
	       	putchar(letter);


	putchar('\n');

	return (0);

}
