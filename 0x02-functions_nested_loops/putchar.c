#include <unistd.h>
#include "main.h"
/**
 * _putchar - Print character c to stdout
 * @c: character to print
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
