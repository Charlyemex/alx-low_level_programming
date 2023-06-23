#include "main.h"

/**

 * _islower - a function that checks for lower case character

 * @c: c is the letter we use for the arguement

 * Return: 0

 */

int _islower(int c)

{

	if (c >= 'a' && c <= 'z')

	{

		return (1);

	}

	else

		return (0);
}
