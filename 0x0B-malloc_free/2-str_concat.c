#include "main.h"
/**
 * _strlen - counts and returns string length
 * @s: that's the string
 * Return: length
 */
int _strlen(char *s)
{
	int counter = 0;

	if (!*s)
		return (0);
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}
