#include "main.h"

/**
 * printf_srev - reverse a string
 * @s: the string to reverse
 * Return: count of characters printed
 */

int printf_srev(va_list args)
{
	int i, j = 0;
	char *s = va_arg(args, char*);

	if (s == NULL)
		s = "(null)";

	while (s[j])
		j++;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (j);
}
