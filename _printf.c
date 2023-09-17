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
	int j = 0;
	char *s;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i += 1;
			switch (format[i])
			{
			case 'c':
				_putchar(va_arg(ap, int));
				break;
			case 's':
				j = 0;
				s = va_arg(ap, char *);

				while (s[j] != '\0')
				{
					_putchar(s[j]);
					j++;
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
	}
	va_end(ap);
	return (i);
}

