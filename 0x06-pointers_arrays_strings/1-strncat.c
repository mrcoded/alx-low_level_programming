#include "main.h"
/**
 * _strncat - " function pointer that concatinate two strings"
 *
 * @n: "integer that determine the number of characters to be printed"
 * @dest: "Points to a destination string"
 * @src: "Points to the source string"
 *
 * Return: " A string that that concatinate two strings in dest"
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while ((j < n) && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	return (dest);
}
