#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
