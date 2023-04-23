#include "main.h"

#define BUFFER_SIZE 1024

void flush_buffer(char buffer[], int *buff_ind);

/**
 * _printf - produces output according to a format
 * @format: a character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int buff_ind = 0;
	int count = 0;
	char buffer[BUFFER_SIZE];

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (int i = 0 ; format[i] != '\0' ; i++)
	{
		if (format[i] == '%')
			i++;
		else
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFFER_SIZE)
			{
				flush_buffer(buffer, &buff_ind);
			}
			count++;
		}
	}
	flush_buffer(buffer, &buff_ind);

	va_end(args);

	return (count);
}
/**
 * flush_buffer - prints contents of the buffer using putchar
 * @buffer: array of characters
 * @buff_ind: the size of the buffer
 * Return: nothing (void)
 */

void flush_buffer(char buffer[], int *buff_ind)
{
	for (int i = 0 ; i < *buff_ind ; i++)
	{
		putchar(buffer[i]);
	}
	*buff_ind = 0;
}
