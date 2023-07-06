#include "main.h"
/**
 * print_number - "Prints an integer. followed by a
 * new line"
 * @n: "The integer to be printed"
 * Returns: void
 */
void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
