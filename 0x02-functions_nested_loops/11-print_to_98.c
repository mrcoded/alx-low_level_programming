#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98)
		{
			printf("%d, ", num--);
		}
		printf("%d\n", num);
	}

	else
	{
		while (num < 98)
		{
			printf("%d, ", num++);
		}
		printf("%d\n", num);
	}
}
