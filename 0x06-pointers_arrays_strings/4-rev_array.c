#include "main.h"
/**
 * reverse_array - reverse contents of an array
 * @a: input
 * @n: input
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
