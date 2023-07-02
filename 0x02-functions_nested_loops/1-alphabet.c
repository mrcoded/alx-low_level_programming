#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 */
void print_alpahabet(void)
{
	char az;

	az = 'a';

	while (az <= 'z')
	{
		_putchar(az);
		az = az + 1;
	}

	_putchar('\n');

	return (0);
}
