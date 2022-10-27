#include <stdio.h>
#include "main.h"

/**
*print_most_numbers - prints zero to nine except two and nine
*Return: void
*/
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (!((x == 50) || (x == 52)))
		{
			putchar(x);
		}
	}
	putchar(10);
}
