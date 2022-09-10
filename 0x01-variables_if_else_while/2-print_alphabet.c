#include<stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 * Return: Always 0
 */

int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
