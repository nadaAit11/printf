#include "main.h"

/**
 * printf_string - prints a string
 * @s: the pointer
 *
 * Return: the string's length
 */

int printf_string(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}
