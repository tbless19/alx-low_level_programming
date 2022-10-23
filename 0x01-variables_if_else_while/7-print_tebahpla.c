#include <stdio.h>
/**
 * main - print reverse alphabet
 * Return: Always 0
 */
int main(void)
{
	int b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}
	putchar('\n');
	return (0);
}
