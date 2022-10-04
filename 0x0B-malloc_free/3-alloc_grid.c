#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **night;
	int i, a;

	if (width <= 0 || height <= 0)
		return (NULL);
	night = malloc(height * sizeof(int *));
	if (night == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		night[i] = malloc(width * sizeof(int));
		if (night[i] == NULL)
		{
			while (i >= 0)
				free(night[i--]);
			free(night);
			return (NULL);
		}
		for (a = 0; a < width; a++)
			night[i][a] = 0;
	}
	return (night);
}
