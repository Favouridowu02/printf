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
	int j = 0, k = 0;
	char *s;


	switch (format[i])
	{
		case 's':
			s = va_arg(ap, char *);
			if (s)
			{
				while (s[k] != '\0')
				{
					_putchar(s[k]);
					k++;
				}
			}
			j += k;
			break;
		case 'c':
			_putchar(va_arg(ap, int));
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
