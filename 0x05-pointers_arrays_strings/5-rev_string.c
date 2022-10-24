#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: reverse string
 */
void rev_string(char *s)
{
	char s_rev = s[0];
	int c = 0;
	int i;

	while (s[c] != '0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		s_rev = s[i];
		s[i] = s[c];
		s[c] = s_rev;
	}
}
