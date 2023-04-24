#include "main.h"

/**
 * rev_str - reverse a string
 * @s: the string to reverse
 * Return: count of characters printed
 */

int rev_str(char *s)
{
	int i, j = 0;

	while (s[j])
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (j);
}
