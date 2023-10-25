#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor of n
 */
long largest_prime_factor(long n)
{
	long max_prime = -1;

	while (n % 2 == 0) {
		max_prime = 2;
		n = n / 2;
	}

	for (long i = 3; i <= sqrt(n); i = i + 2) {
		while (n % i == 0) {
			max_prime = i;
			n = n / i;
		}
	}

	if (n > 2) {
		max_prime = n;
	}

	return max_prime;
}

int main(void)
{
	long n = 612852475143;
	long largest_prime = largest_prime_factor(n);

	printf("%ld\n", largest_prime);

	return (0);
}
