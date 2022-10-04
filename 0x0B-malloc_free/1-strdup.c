#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to newly allocated memory
 * @str: a string given by main
 * Return: the pointer or null
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int night, i;

	if (str == NULL)
		return (NULL);
	night = 0;

	while (str[night] != '\0')
		night++;
	ptr = malloc(sizeof(char) * (night + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < night; i++)
		ptr[i] = str[i];
	ptr[night] = '\0';
	return (ptr);
}
