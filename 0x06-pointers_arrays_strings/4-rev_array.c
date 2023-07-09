#include "main.h"
/**
 * reverse_array - "Reverses the content of an array of integers."
 *
 * @a: " Points to an array of integers"
 * @n: "The number of elements of an array"
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}

