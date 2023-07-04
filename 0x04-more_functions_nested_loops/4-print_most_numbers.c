#include "main.h"

/**
 * print_most_numbers - "Prints the numbers from 0-9 except for 2 and 4."
 */
void print_most_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 10; numb++)
	{
		if (numb != '2' && numb != '4')
			_putchar('0' + numb);
	}
	_putchar('\n');
}
