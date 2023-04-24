#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 *
 * Return: a write system call, return -1 if something wrong
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
