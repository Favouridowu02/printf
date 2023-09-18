#include "main.h"

/**
 * pswitch - contains the switch statement
 * @ap: the va_list
 * @format: the format array
 * @i: the length
 */
void pswitch(va_list ap, const char *format, int i)
{
	int j;
	char *s;

	switch (format[i])
	{
		case 'c':
			_putchar(va_arg(ap, int));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s != NULL)
			{
				while (s[j] != '\0')
				{
					_putchar(s[j]);
					j++;
				}
			}
			break;
		case '%':
			_putchar('%');
			break;
		default:
			_putchar('%');
			_putchar(format[i]);
			break;
	}
}