#include "main.h"

/**
 * print_number - prints an integer
 * @c: integer to be printer
 *
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
