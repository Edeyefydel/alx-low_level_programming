#include <stdio.h>
/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int count = 0;

	if (count > 0)
		for (; count < argc; count++)
			printf("%s\n", argv[count]);
	return (0);
}
