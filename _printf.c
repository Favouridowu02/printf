#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - Write a function that produces output according to a format
 * @format: a character string. The format string is composed of zero or
 * more directives
 * Return: stringlength
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	int j;
	char *s;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		j = 0;
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				_putchar(va_arg(ap, int));
				break;
			case 's':
				s = va_arg(ap, char *);

				if (s != NULL)
				{	while (s[j] != '\0')
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
		else
			_putchar(format[i]);
		i += j;
	}
	va_end(ap);
	return (i);
}

