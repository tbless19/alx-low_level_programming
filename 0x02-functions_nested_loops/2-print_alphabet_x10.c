#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet in lower case
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char pt;

	for (i = 1; i <= 10; i++)
		for (pt = 'a'; pt <= 'z'; pt++)
			_putchar(pt);
	_putchar('\n');
}
