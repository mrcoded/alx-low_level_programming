#include <stdio.h>
/**
 * main - prints alphabets except from q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c != 'q' && c != 'e')
	{
		putchar(c);
		c = c + 1;
	}

	putchar('\n');
	return (0);
}
