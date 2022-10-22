#include <stdlib.h>
#include <stdio.h>
/**
 * main - print lowercase alphabets
 * Return: Always 0
 */
int main(void)
{
	int lett = 'a';

	while (lett <= 'z')
	{
		putchar(lett);
		lett++;
	}
	putchar('\n');
	return (0);
}
