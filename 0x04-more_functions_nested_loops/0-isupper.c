#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks character for uppercsde
 * @c: Variable in text
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
