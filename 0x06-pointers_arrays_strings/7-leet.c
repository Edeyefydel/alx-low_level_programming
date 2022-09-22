#include "main.h"
/**
 * leet -  encodes a string into 1337.
 * @spike: string i used
 * Return: spike
 */
char *leet(char *spike)
{
	int count = 0, i;
	int lower_case[] = {97, 101, 111, 116, 108};
	int upper_case[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(spike + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(spike + count) == lower_case[i] || *(spike + count) == upper_case[i])
			{
				*(spike + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (spike);
}
