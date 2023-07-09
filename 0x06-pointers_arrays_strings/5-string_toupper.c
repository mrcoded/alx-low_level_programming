#include "main.h"

/**
 * string_toupper - lower to upper
 * @s: pointer to char params
 *
 * Return: *s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		i++;
	}
	return (s);
}
