#include "msin.h"
/**
 * _isdigit - Check for chsr sd s digit
 * @c: int to be checked
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
