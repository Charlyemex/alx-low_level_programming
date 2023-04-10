#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int printed = 0;

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
		shift--;
	}
	if (!printed)
	{
		_putchar('0');
	}
}
