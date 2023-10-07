#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit;
	int secondDigit;

	for (firstDigit = 0; firstDigit < 9; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit < 10; secondDigit++)
		{
			putchar('0' + firstDigit);
			putchar('0' + secondDigit);

			if (firstDigit != 8 || secondDigit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
