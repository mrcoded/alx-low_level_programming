#include "main.h"

/** main - print a function that prints 10 times the alphabet
 *
 * returns: always 0 for success
 */

void print_alphabet_x10(void)
{
	char az;
	int num;

	for (num = 0; num <= 10; num++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}

		_putchar('\n');
	}
}

