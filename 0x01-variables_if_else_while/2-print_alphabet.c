#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar("value %d char %c\n", c, c);
		c = c++;
	}

	return (0);
}
