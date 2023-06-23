#include "main.h"

/**

* _puts - a function that prints a string

* @str : input

* return: 0

*/

void _puts(char *str)

{

	while (*str != '\0')

	_putchar(*str++);

	_putchar('\n');

}
