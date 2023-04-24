#include "main.h"

/**
 * printf_rot13 - encode into rot13
 * @point: string to encode
 * Return: (point)
 */

int printf_rot13(va_list args)
{
	char *s = va_arg(args, char*);
	int i = 0, j, count = 0, flag = 0;

	char lett[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
	'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a',
	'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
	'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char rot[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	if (!s)
	{
		s = "(null)";
	}
	while (s[i])
	{
		flag = 0;
		for (j = 0; j < 52; j++)
		{
			if (s[i] == lett[j])
			{
				_putchar(rot[j]);
				count++;
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			_putchar(s[i]);
			i++;
		}
	}
	return (count);
}
