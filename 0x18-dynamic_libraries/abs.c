#include "main.h"

/**

 * _abs - function that compute the absolute value of an integer

 * @c: is int we used to test the arguement of the function

 * Return: 0

 */

int _abs(int c)

{

	if (c > 0 || c == 0)

	{

		return (c);

	}

	else

		return (c * -1);

}
