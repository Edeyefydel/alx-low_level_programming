#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int i;
	int range = max - min  + 1;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);
	for (i = 0; range > 0; range--, i++, min++)
		p[i] = min;
	return (p);
}
