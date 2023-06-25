#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (a <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	while (d <= 'Z')
	{
		putchar(c);
		d = d + 1;
	}

	putchar('\n');
	return (0);
}
