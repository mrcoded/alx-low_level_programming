#include "main.h"
/**
 * _strlen - finds and outputs length of string
 * @s: pointer to string.
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
