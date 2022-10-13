#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints names
 * @name: pointer to the name
 * @f: prints the other code
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
