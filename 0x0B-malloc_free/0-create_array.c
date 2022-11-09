#include "main.h"
/**
 * create_array - creates an array of chars, etc
 * @size: size of array
 * @c: input
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int buff;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (buff = 0; buff < size; buff++)
	{
		array[buff] = c;
	}
	return (array);
}
