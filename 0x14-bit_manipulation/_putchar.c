#include "main.h"
#include <unistd.h>
/**
 * _putchar - this writes character c to stdout
 * @c: character to be printed
 *
 * Return: 1 On success
 * On error, return -1 and set error appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
