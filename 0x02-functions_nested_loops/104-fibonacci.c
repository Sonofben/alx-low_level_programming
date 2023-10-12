#include <stdio.h>

/**
 * main - Fibonacci numbers up to 98
 *
 * Purpose - Calculate and print the first 98 Fibonacci numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    unsigned long int i;
    unsigned long int bef = 1;
    unsigned long int aft = 2;
    unsigned long int l = 1000000000; // 10^9 for splitting large Fibonacci numbers
    unsigned long int bef1;
    unsigned long int bef2;
    unsigned long int aft1;
    unsigned long int aft2;


    printf("%lu", bef);

    for (i = 1; i < 90; i++)
    {
        printf(", %lu", aft);
        aft += bef;
        bef = aft - bef;
    }

    bef1 = (bef / l);
    bef2 = (bef % l);
    aft1 = (aft / l);
    aft2 = (aft % l);
    for (i = 90; i < 98; ++i)
    {
        printf(", %lu%09lu", aft1, aft2);
        unsigned long int temp1 = aft1;
        unsigned long int temp2 = aft2;
        aft1 = aft1 + bef1;
        bef1 = temp1;
        aft2 = aft2 + bef2;
        bef2 = temp2;
    }

    printf("\n");
    return (0);
}
