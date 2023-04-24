#include "main.h"

/**
 * _strlen - a string length function
 * @s: the string pointer
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
