#include <unistd.h>
#include "main.h"
/**
 * _putchar - Prints a character
 * @c: the character to be passed
 * Return: 0
 */
int _putchar(char c)
{
	if (c)
		write(1, &c, 1);
	return (0);
}

