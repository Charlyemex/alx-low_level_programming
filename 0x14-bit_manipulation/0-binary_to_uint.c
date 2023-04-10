#include "main.h"
/**
 * binary_to_unit - Converts binary number to unsigned int
 * @b: The string that contains the binary number
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			uint <<= 1;
			uint += b[i] - '0';
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (uint);
}
