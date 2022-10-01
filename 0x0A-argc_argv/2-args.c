#include <stdio.h>
/**
 * main - Print the name of the program
 * @argc: Count arguments
 *@argv: Arguments
 *Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (count > 0)
		for (; count < argc; count++)
			printf("%s\n", argv[count]);
	return (0);
}
