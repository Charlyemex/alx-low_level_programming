#include "main.h"

/**
 * get_endianness - it checks if a machine is small or large endian
 * Return: 0 for large and 1 for small
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
