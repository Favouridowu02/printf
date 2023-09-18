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
	int k;
	char *s;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		k = i + 1;
		if (format[i] == '%' && format[k])
		{
			switch (format[k])
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
				_putchar(format[k]);
				break;
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(ap);
	return (i);
}

