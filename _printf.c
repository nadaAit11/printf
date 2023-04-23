#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c' :
				{
					c = va_arg(args, int);
					putchar(c);
					count++;
					break;
				}
				case 's' :
				{
					for (char *s = va_arg(args, char *); *s != '\0' ; s++)
					{
						putchar(*s);
						count++;
					}
					break;
				}
				case '%' :
				{
					putchar('%');
					count ++;
					break;
				}
				default : 
				{
					putchar('%');
					putchar(*format);
					count += 2;
					break;
				}
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
