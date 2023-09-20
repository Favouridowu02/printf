#include "main.h"
#include <unistd.h>

int _putstr(char *str);
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
	char c;

	switch (format[i])
	{
		case 's':
			s = va_arg(ap, char *);
			if (s != NULL)
			{
				j += _putstr(s);
			}
			else
			{
				j += _putstr("(null)");
			}
			break;
		case 'c':
			c = va_arg(ap, int);
			if (c != NULL)
			{
				_putchar(c);
				j++;
			}
			break;
		case '%':
			_putchar('%');
			j += 1;
			break;
		case 'd':
		case 'i':
			j += print_decimal(va_arg(ap, int));
			break;
		default:
			_putchar('%');
			_putchar(format[i]);
			j += 2;
			break;
	}
	va_end(ap);
	return (j);
}
/**
 * _putstr - prints string
 * @str: the string to be printed
 *
 * Return: the length of the string
 */
int _putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

