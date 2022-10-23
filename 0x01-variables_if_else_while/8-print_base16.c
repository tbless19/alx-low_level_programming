#include <stdio.h>
/**
 * main - print numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int let = 'a';

	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	while (let <= 'f')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
	return (0);

}
