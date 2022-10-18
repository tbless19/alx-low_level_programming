#include "main.h"
/**
 * _islower - checck that a character is lowercase
 * @c: entry character being checked
 * Return: 1 if character is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
