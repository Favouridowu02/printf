#include "main.h"

/**
 * pswitch - contains the switch statement
 * @ap: the va_list
 * @format: the format array
 * @i: the length
 * Return: the length of the string
 */
int pswitch(va_list ap, const char *format, int i)
{
	int j = 0;
	char *s;

	switch (format[i])
	{
		case 'c':
			_putchar(va_arg(ap, int));
			j += 1;
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s != NULL)
			{
				if (s)
				{
					while (s[j] != '\0')
					{
						_putchar(s[j]);
						j++;
					}
				}
			}
			break;
		case '%':
			_putchar('%');
			j += 1;
			break;
		default:
			_putchar('%');
			_putchar(format[i]);
			j += 2;
			break;
	}
	return (j);
}
