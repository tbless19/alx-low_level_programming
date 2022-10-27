#include "main.h"
/**
 * string_toupper - changes lowercase letters in string to uppercase
 * @c: pointer
 * Return: c
 */
char *string_toupper(char *c)
{
	int x;

	for (x = 0; c[x] != '\0'; x++)
	{
		if ((c[x] >= 'a') && (c[x] <= 'z'))
			c[x] -= 32;
	}
	return (c);
}
