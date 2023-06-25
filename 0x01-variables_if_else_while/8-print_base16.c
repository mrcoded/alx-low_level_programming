#include <stdio.h>
/**
 * main - prints all numbers of base 16.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i = i + 1;
	}
	i = 'a';

	while (i <= 'f')
	{
		putchar(i);
		i = i + 1;
	}

	puchar('\n');
	return (0);
}
