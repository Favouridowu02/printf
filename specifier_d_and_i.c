#include "main.h"
/**
 * print_decimal - Prints in decimal the value of integer input
 * @num: Integer input
 *
 * Return: The lenght printed characters
 */
int print_decimal(int num)
{
	int lenght = 0;
	unsigned int positive_num;

	if (num < 0)
	{
		_putchar('-');
		lenght++;
		num = num * (-1);
	}
	positive_num = num;
	if (num == 0)
		_putchar('0');
	else if (positive_num <= 9)
	{
		_putchar(positive_num + '0');
		lenght++;
	}
	else
	{
		lenght += print_decimal(positive_num / 10);
		_putchar((positive_num % 10) + '0');
		lenght++;
	}
	return (lenght);
}
