#include "main.h"
/**
 * _strncat - can concatenate two strings
 * @dest:  first string
 * @src: second string
 * @n: count number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, p = 0;

	while (dest[a] != '\0')
		a++;
	while (src[p] != '\0' && n > p)
	{
		dest[a] = src[p];
		a++;
		p++;
	}
	if (n > 0)
	{
		dest[a] = '\0';
	}
	return (dest);
}
