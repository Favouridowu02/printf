#include <unistd.h>
#include "main.h"
/**
 * _putchar - Prints a character
 * @c: the character to be passed
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

