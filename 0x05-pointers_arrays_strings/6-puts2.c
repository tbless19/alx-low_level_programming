#include "main.h"
/**
 * puts2 - print every other ccharacter
 * @str: string
 * Return: print
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if ((x % 2) == 0)
		{
			_putchar(str[x]);
		}
		else
			continue;
	}
	_putchar('\n');
}
