#include "main.h"

/**
 * print_digit - helper function used to print an int
 * @n: the number to print
 *
 * Return: the count
 */

int print_digit(int n)
{
	int div;
	int count = 0;

	for (div = 1; div <= n; div *= 10)
		;
	while (n > 0)
	{
		div /= 10;
		_putchar(n / div + '0');
		 n %= div;
		 count++;
	}
	return (count);
}
