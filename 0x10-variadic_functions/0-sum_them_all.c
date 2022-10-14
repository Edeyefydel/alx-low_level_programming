#include <stdarg.h>
#include<stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all of it param together
 * @n : number of all the param
 * return : sum
 */
int sum_them_all(const unsigned int n, ...);
{
	unsigned int i;
	int sum = 0;
	va_list arg;


	if (n == 0)
		return (sum);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);
	va_end(arg);

	return (sum);
}
