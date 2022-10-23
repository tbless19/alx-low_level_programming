#include <stdio.h>
#include <stdlib.h>
 /**
  * main - prints alphabet with q  & e
  * Return: Always 0
  */
int main(void)
{
	int let = 'a';

	while (let <= 'z')
	{
		if ((let != 'e') && (let != 'q'))
		{
			putchar(let);
		}
		let++;
	}
	putchar('\n');
	return (0);
}
