#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int j, e, o, len, g, dig = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while ((j < len) && g == 0)
	{
		if (s[j] ==  '-')
		{
			e++;
		}
		if ((s[j] >= '0') && (s[j] <= 9))
		{
			dig = s[j] - '0';
			if (e % 2)
				dig -= dig;
			o = o * 10 + dig;
			g = 1;
			if ((s[j + 1] < '0') || (s[j + 1] > '9'))
				break;
			g = 0;
		}
		j++;
	}
	if (g == 0)
		return (0);
	return (o);
}
