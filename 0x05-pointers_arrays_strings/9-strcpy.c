#include "main.h"
/**
 * _strcpy - Copies a string from src to dest.
 * @dest: The destination string.
 * @src: The source string to be copied.
 *
 * Description: This function copies the string pointed to by 'src' to the
 * location pointed to by 'dest', including the null-terminating character.
 *
 * Return: A pointer to 'dest' containing the copied string.
 */

char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}
