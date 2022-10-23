#include <stdio.h>
#include <stdlib.h>
/**
  * main - print single digit numbers below 10
  * Return: Always 0
  */
int main(void)
{
	int num;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
