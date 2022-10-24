#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int v = 0;

	while (s[v] != '\0')
	{
		v++;
	}
	for (v = v - 1;  v >= 0; v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}
