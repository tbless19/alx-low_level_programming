#include "main.h"
/**
 * _isdigit - Check for chsr sd s digit
 * @c: int to be checked
 * Return: Always 0
 */
int _isdigit(int c)
{
	int x = 0;

	if (c >= '0' && c <= '9')
		x = 1;

	return (x);
}
