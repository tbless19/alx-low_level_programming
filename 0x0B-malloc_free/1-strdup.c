#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: new string
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int buff;
	int t = 0;
	char *dest;

	if (str == NULL)
	{
		return (NULL);
	}
	for (buff = 0; str[buff]; buff++)
	{
		t++;
	}
	t += 1;
	dest = malloc(t * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (buff = 0; str[buff] != '\0'; buff++)
	{
		dest[buff] = str[buff];
	}
	dest[buff] = str[buff];

	return (dest);
}
