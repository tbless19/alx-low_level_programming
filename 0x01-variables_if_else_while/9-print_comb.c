#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers
 * Return: Always 0
 */
int main(void)
{
	int d = 0;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
		if (d < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
