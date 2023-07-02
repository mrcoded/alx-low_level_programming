#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lower
 * Return : Always return 0
 */

void print_alphabet_x10(void)
{
	char az;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}

		_putchar('\n');
	}
}

