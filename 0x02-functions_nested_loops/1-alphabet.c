#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, 
 * followed by a new line.
 *
 */
int main(void);

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
}
