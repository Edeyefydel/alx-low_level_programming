#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_to_uint- convert binary to unsigned int
 *  @b: binary
 *   Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int nanse = 0, j;
	unsigned int number = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);

	while (b[nanse] != '\0')
		nanse++;

	nanse -= 1;
	j = 0;

	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (non_binary);
		if (b[j] == '1')
			number += (1 * (1 << nanse));
		j++;
		nanse--;
	}
	return (number);
}
