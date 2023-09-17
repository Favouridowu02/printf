#include <unistd.h>

/**
 * _putchar - Prints a character
 * @c: the character to be passed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

