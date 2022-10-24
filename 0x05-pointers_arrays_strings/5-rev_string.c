#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	char srev = s[0];
	int x = 0;
	int i;

	while (s[x] != '\0')
	{
		x++;
	}
	for (i = 0; i < x; i++)
	{
		x--;
		srev = s[i];
		s[i] = s[x];
		s[x] = srev;
	}
}
