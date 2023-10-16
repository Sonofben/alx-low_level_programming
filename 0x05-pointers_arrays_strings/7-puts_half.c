#include "main.h"
/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 *
 * Description: If the length of the string is odd, it prints the
 * characters from the middle character to the end. If the length
 * is even, it prints the characters from halfway to the end.
 */

void puts_half(char *str)
{
int a, n, longi;
longi = 0;
for (a = 0; str[a] != '\0'; a++)
longi++;
n = (longi / 2);
if ((longi % 2) == 1)
n = ((longi + 1) / 2);
for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
