#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 * @dest: First string
 * @src: Second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, p = 0;

	while (dest[a] != '\0')
		a++;
	while (src[p] != '\0')
	{
		dest[a] = src[p];
		a++;
		p++;
	}
	dest[a] = '\0';
	return (dest);
}
