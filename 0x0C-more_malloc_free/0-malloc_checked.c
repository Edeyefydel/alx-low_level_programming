#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: number of memory to be allocated
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
