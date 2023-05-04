#include "main.h"

/**
 * flip_bits - it counts the num of bits to be changed
 * to move from one num to another
 * @n: the first num
 * @m: the second num
 *
 * Return: the num of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, num = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			num++;
	}

	return (num);
}
