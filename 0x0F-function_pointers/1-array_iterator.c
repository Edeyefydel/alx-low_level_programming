#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print an array
 * @array: First parameter
 * @size: Second parameter
 * @action: Print the result
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array && action)
		for (n = 0; n < size; n++)
			action(array[n]);
}
