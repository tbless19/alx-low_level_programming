#include <unistd.h>
/**
 * _putchar - print char c to stdout
 * @c: input c
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
