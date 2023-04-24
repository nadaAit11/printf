#include "main.h"

/**
* no_struct - a helper function that is called when there is a %something
* @c: the character passed that was after %
* @count: the number of count thus far. it will be incremented
* @argu: the va_list that is passed to us so we can va_arg it
*
* Return: the count total
*/

int no_struct(char c, int count, va_list argu)
{
	int j;
	char *s;

	switch (c)
	{
		case 'c':
			j = va_arg(argu, int);
			count += _putchar(j);
			break;
		case 's':
			s = va_arg(argu, char *);
			if (!s)
				count += _putstring("(null)");
			else
				count += _putstring(s);
			break;
		case '%':
			count += _putchar('%');
			break;
		case 'i':
		case 'd':
			j = va_arg(argu, int);
			if (!j)
				count += _putchar('0');
			else
				count += print_number(j);
			break;
		default:
			count += 2;
			_putchar('%');
			_putchar(c);
	}
	return (count);
}

/**
* _printf - our own printf function
* @format: A character string, composed of zero of more directives
*
* Description: Writes a formatted string to the standard output
* Return: an integer. The number of characters printed excluding the null byte
*/

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list argu;

	va_start(argu, format);

	if (!format)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			count++;
			_putchar(format[i]);
		}
		else if (format[i + 1])
		{
			i++;
			count = no_struct(format[i], count, argu);
		}
		else
			return (-1);
	}
	va_end(argu);
	return (count);
}
