#include "main.h"

/**
 * pswitch - contains the switch statement
 * @ap: the va_list
 * @format: the format array
 * @i: the length
 */
int pswitch(va_list ap, const char *format, int i)
{
	int j = 0;
	char *s;

	switch (format[i])
	{
		case 'c':
			_putchar(va_arg(ap, int));
			i += 1;
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
			else
			{
				_putchar('a');
			}
			i += j;
			break;
		case '%':
			_putchar('%');
			i += 1;
			break;
		default:
			_putchar('%');
			_putchar(format[i]);
			break;
	}
	return (i);
}
