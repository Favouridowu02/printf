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
	int i = 0, j = 0, k = 0;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] != '\0')
			{
				k = pswitch(ap, format, i);
				j += k;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(ap);
	return (j);
}
