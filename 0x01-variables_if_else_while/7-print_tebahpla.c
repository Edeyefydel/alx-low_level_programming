#include<stdio.h>
/**
 * main - Prints the alphabet at reverse
 * Return: Always (Success)
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
