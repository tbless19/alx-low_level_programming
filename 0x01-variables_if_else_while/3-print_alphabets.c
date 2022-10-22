#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabet of both cases
 * Return: 0
 */
int main(void)
{
	int lett = 'a';
	int up_lett = 'A';

	while (lett <= 'z')
	{
		putchar(lett);
		lett++;
	}
	while (up_lett <= 'Z')
	{
		putchar(up_lett);
		up_lett++;
	}
	putchar('\n');
	return (0);
}
