#include <stdio.h>
#include "main.h"
/**
 * main - print number of arg passd
 * @argc: argument 1
 * @argv: argument
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
