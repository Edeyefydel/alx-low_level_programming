#include "main.h"
/**
 * _strchr - searches for the first occurrence of the character c
 * @s: this is the string to be scanned
 * @c: this is the character to be searched in s
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int night = 0;

	while (s[night] != 0)
	{
		if (s[night] == c)
			return (s + night);
		night++;
	}
	if (c == 0)
		return (s +  night);
	return (0);
}
